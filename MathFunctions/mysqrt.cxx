#include "MathFunctions.h"
#include "TutorialConfig.h"
#include <stdio.h>

#include <math.h>

double mysqrt(double x) {
    if(x <= 0) {
        return 0;
    }
    double result;
    double delta;
#if defined (HAVE_LOG) && defined (HAVE_EXP)
    result = exp(log(x)*0.5);
#else
    result = x;
    int i;
    for (i=0; i<6; ++i) {
        if(result <= 0) {
            result = 0.1;
        }
        delta = x - (result*result);
        result = result + 0.5 * delta/result;
        fprintf(stdout, "Computing sqrt of %g to be %g\n", x, result);
    }
#endif
    return result;
}
