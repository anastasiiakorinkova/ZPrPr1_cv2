
#include <stdio.h>
#include <math.h>
#include <stdlib.h>



int main() {
    float bmi, m, v;
    
    printf ("Zadajte  hmotnost pouzivatela v kilogramoch: ");
    scanf ("%f", &m);
    printf ("Zadajte vyska pouzivatela v metroch: ");
    scanf ("%f", &v);
    
    bmi = m / (pow(v, 2));
    
    printf ("Hmotnostny index: %f ", bmi);
    
    if (bmi <= 19)
        { printf ("\nPodvyziva");
        }
    else if (bmi >= 25)
        { printf ("\nNadvaha");
        }
    else 
        { printf ("\nNormalna hmotnost");
        }
    return 0;
}
