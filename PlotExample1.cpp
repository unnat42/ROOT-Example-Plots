int PlotExample1(){

	TCanvas *c = new TCanvas("c","XY Plot", 200, 10, 700, 500); //Initialise Canvas to draw on

	// c->SetFillColor(kWhite);
	// c->SetFrameLineColor(kWhite);							//Blank it out. Not really needed but a good practice
	// c->SetFrameBorderMode(0);

	int npoints;
	std::cout << "Enter the number of points: ";				//Input number of points to consider for input
	std::cin >> npoints;										//Will also be used as input data

	double x[npoints], y[npoints];								//initialise double arrays x->input and y->output



	for(int i=0; i<npoints;i++){								//Custom function to tweak the input data to plot
		x[i] = i;
		y[i] = (TMath::Sin(TMath::Pi()*i/npoints)) + 10*i/TMath::Exp(i); 

	}


	TGraph* gr = new TGraph(npoints, x, y);				
	gr->SetTitle("Custom Function Plot");		
	// gr->SetMaximum(500);										//Can put custom scale on Y-axis. Default setting is auto-scale
	// gr->SetMinimum(-500);
	gr->SetLineColor(kRed);
	gr->Draw("AC*");

	gROOT->GetListOfCanvases()->Draw();
	//std::cout << sizeof(x)/sizeof(x[0]);						//Check the input datd is populated or not

	//Plotting the input points to check:						//Plotting the input data. Replace x with y to get the output data
	// for(auto i: x){
	// 	std::cout << i << std::endl;
	// }

	return 0;													//0 for error-less execution
}

