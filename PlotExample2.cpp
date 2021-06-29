int PlotExample2(){

	TCanvas *c = new TCanvas("c","Surfaces Drawing Options",700,700);; //Initialise Canvas to draw on

	int npoints;
	std::cout << "Enter the number of points: ";				//Input n for n x n XY-grid
	std::cin >> npoints;										

    TF2 *f2 = new TF2("f2","x**2  + 1/((y+0.1)**2)",0,(double)npoints,0,(double)npoints); //Multi-variable function  taking x and y as input
    // f2->SetContour(48);
    // f2->SetFillColor(45);
    f2->SetLineWidth(1);
    f2->SetLineColor(5);

    f2->GetHistogram()->GetXaxis()->SetTitle("X-Axis");			//Title and set the axes for easy recognition
    f2->GetHistogram()->GetYaxis()->SetTitle("Y-Axis");
    f2->GetHistogram()->GetXaxis()->SetTitleOffset(1.8);
    f2->GetHistogram()->GetYaxis()->SetTitleOffset(1.8);


    //TF2 function has built-in methods which can be used to plot various types of surf plots or histograms
    f2->Draw("surf1");											
 
	
	return 0;													//0 for error-less execution
}

