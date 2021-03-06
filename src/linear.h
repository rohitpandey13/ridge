#include "depends.h"
#ifdef HAVE_GSL_HEADER

#include "commonFunctions.h"
#include "computePvals.h"
#include "coordinateDescent.h"
#include "linearFunctions.h"
#include "ReadInData.h"
#include "ridgeRegressionFunctions.h"
#include "thin.h"

/* Prototype for linear main function */
int linearMain(char * genofilename,
	       char * thinfilename,
	       char * phenofilename,
	       char * covarfilename,
	       char * betafilename,
	       char * lambdafilename,
	       char * lambdacovarfilename,
	       char * approxtestfilename,
	       char * permtestfilename,
	       PREC lambda,
	       PREC lambda_c,
	       unsigned long int seed,
	       int howManyK,
	       int individualK,
	       int intercept_flag,
	       int standardize_flag,
	       int standardize_c_flag,
	       int thinning_distance,
	       int NINDIV,
	       int NPRED,
	       int NCOVAR,
	       int NSNPS,
	       char ** SNPnames,
	       char ** COVARnames,
	       int predict_flag,
	       PREC convergence_threshold,
	       int verbose);
#endif
