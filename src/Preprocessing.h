#include <cstring>
#include "common.h"
#ifdef USE_MKL
#include <mkl_cblas.h>
#else
extern "C" {
#include <cblas.h>
}
#endif

int AlignMatrices(RawMatrix** r_matrices, int nSubs, Point* pts);
int AlignMatricesByFile(RawMatrix** r_matrices, int nSubs, const char* file, Point* pts);
void leaveSomeTrialsOut(Trial* trials, int nTrials, int tid, int nLeaveOut);
void corrMatPreprocessing(CorrMatrix** c_matrices, int n, int nSubs);
float fisherTransformation(float v);
void z_score(double* v, int n);
RawMatrix** rawMatPreprocessing(RawMatrix** r_matrices, int n, int nTrials, Trial* trials);
float getAverage(RawMatrix* r_matrix, Trial trial, int vid);
