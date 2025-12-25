#include <stdio.h>
#include <math.h>

int main() {

    double p, q, r, s;
    // char choice;

    printf("\n============================\n");
    printf("|  YTRS MATRIX ROOT ENGINE |\n");
    printf("|     ~ by Yash (v1.0) ~   |\n");
    printf("============================\n");

    // for (;;)
    // {

    printf("\nENTER ANY 2x2 REAL MATRIX:\n");
    printf("[p q]\n");
    printf("[r s]\n");
    scanf("%lf %lf", &p, &q);
    scanf("%lf %lf", &r, &s);

    double T = p + s;
    double D = p * s - q * r;
    double disc = T * T - 4 * D;

    if (disc < -1e-8){
        printf("\nREAL ROOTS DON'T EXIST.\n");
        printf("ONLY COMPLEX ROOTS EXIST.\n\n");
        printf("  Execution Complete\n");
        printf("  Press ENTER to close the program...");
        getchar(); getchar();
        return 0;
    }

    // CASE 1: Zero Matrix
    if (fabs(p) < 1e-8 && fabs(q) < 1e-8 && fabs(r) < 1e-8 && fabs(s) < 1e-8) {
        printf("\nINFINITE REAL ROOTS EXIST FOR THE ZERO MATRIX.\n");
        printf("Every nilpotent 2x2 real matrix is a valid square root.\n\n");
        printf("  Execution Complete\n");
        printf("  Press ENTER to close the program...");
        getchar(); getchar();
        return 0;
    }

    // CASE 2: Identity Matrix
    else if (fabs(p - 1) < 1e-8 && fabs(q) < 1e-8 && fabs(r) < 1e-8 && fabs(s - 1) < 1e-8) {
        printf("\nINFINITE REAL ROOTS EXIST FOR THE IDENTITY MATRIX.\n");
        printf("Any 2x2 real orthogonal matrix (like rotation matrices) is a valid square root.\n\n");
        printf("  Execution Complete\n");
        printf("  Press ENTER to close the program...");
        getchar(); getchar();
        return 0;
    }

    // CASE 3: No Real Roots
    else if (D < -1e-8) {
        printf("\nREAL ROOTS DON'T EXIST (Negative determinant).\n\n");
    }

    // CASE 4: Scalar Matrix (Discriminant ~ 0)
    else if (fabs(disc) < 1e-8) {
        double k1 = 1 / sqrt(2 * T);
        double k2 = -k1;

        double A1 = 0.5 * ((1 / k1) + ((p - s) * k1));
        double B1 = q * k1;
        double C1 = r * k1;
        double D1 = 0.5 * ((1 / k1) - ((p - s) * k1));

        double A2 = 0.5 * ((1 / k2) + ((p - s) * k2));
        double B2 = q * k2;
        double C2 = r * k2;
        double D2 = 0.5 * ((1 / k2) - ((p - s) * k2));

        printf("\n2 REAL ROOTS EXIST.\n");

        printf("\n1ST ROOT:\t\t2ND ROOT:\n[%.2lf %.2lf]\t\t[%.2lf %.2lf]\n", A1, B1, A2, B2);
        printf("[%.2lf %.2lf]\t\t[%.2lf %.2lf]\n\n", C1, D1, C2, D2);
        printf("  Execution Complete\n");
        printf("  Press ENTER to close the program...");
        getchar(); getchar();
        return 0;
    }

    // CASE 5: Main YTRS Real Roots (4 roots)
    else {
        double sqrtD = sqrt(D);

        double k1 = 1 / sqrt(T + 2 * sqrtD);
        double k2 = -k1;
        double k3 = 1 / sqrt(T - 2 * sqrtD);
        double k4 = -k3;

        double A1 = 0.5 * ((1 / k1) + ((p - s) * k1));
        double B1 = q * k1;
        double C1 = r * k1;
        double D1 = 0.5 * ((1 / k1) - ((p - s) * k1));

        double A2 = 0.5 * ((1 / k2) + ((p - s) * k2));
        double B2 = q * k2;
        double C2 = r * k2;
        double D2 = 0.5 * ((1 / k2) - ((p - s) * k2));

        double A3 = 0.5 * ((1 / k3) + ((p - s) * k3));
        double B3 = q * k3;
        double C3 = r * k3;
        double D3 = 0.5 * ((1 / k3) - ((p - s) * k3));

        double A4 = 0.5 * ((1 / k4) + ((p - s) * k4));
        double B4 = q * k4;
        double C4 = r * k4;
        double D4 = 0.5 * ((1 / k4) - ((p - s) * k4));

        printf("\n4 REAL ROOTS EXIST.\n");

        printf("\n1ST ROOT:\t\t2ND ROOT:\n[%.2lf %.2lf]\t\t[%.2lf %.2lf]\n", A1, B1, A2, B2);
        printf("[%.2lf %.2lf]\t\t[%.2lf %.2lf]\n", C1, D1, C2, D2);

        printf("\n3RD ROOT:\t\t4TH ROOT:\n[%.2lf %.2lf]\t\t[%.2lf %.2lf]\n", A3, B3, A4, B4);
        printf("[%.2lf %.2lf]\t\t[%.2lf %.2lf]\n\n", C3, D3, C4, D4);

            printf("  Execution Complete\n");
            printf("  Press ENTER to close the program...");
            getchar(); getchar();
        return 0;
    }
// }

    printf("\n====================================\n");
    printf("  Execution Complete\n");
    printf("  Press ENTER to close the program...");
    getchar(); getchar();
    return 0;
}

    //  printf("\nDO YOU WANT TO CONTINUE? (Y/N):\n");
    //  scanf(" %c", &choice);

    //  if(choice=='Y' || choice=='y')
    //  {
    //     continue;
    //  }
    //  else if(choice=='N' || choice=='n')
    //  {
    //     break;

    //  }
