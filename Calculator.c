 #include <stdio.h>
 #include <math.h>
 #include <locale.h>
 #include <stdbool.h>

 #define reset   "\033[0m"
 #define green "\033[32m"
 #define cyan   "\033[36m"
 #define red "\033[31m"

    int main () {

        setlocale(LC_ALL, ".UTF-8"); // Used to make this simbol works "º"

        int opt = 0, nums = 0;
        float x = 0, y = 0, opr = 0; // opt means "Option" | opr means "Operation"
        


        while (opt != 6) {

            printf("=======================\n");
            printf("|" cyan "     Calculator" reset     "      |\n" );
            printf("=======================\n");

            printf ("|" green " [1]" reset " Addition        |  \n");
            printf ("|" green " [2]" reset " Subtraction     |  \n");
            printf ("|" green " [3]" reset " Multiplication  |  \n");
            printf ("|" green " [4]" reset " Division        |  \n");
            printf ("|" green " [5]" reset " Exponentiation  |  \n");
            printf ("|" green " [6]" reset " Exit            |  \n");    
            printf ("=======================  \n");

            scanf ("%d", &opt);


            if (opt == 1) {

                printf ("How many numbers will you add: ");
                scanf ("%d", &nums);
                

                for (int i = 1; i <= nums; i++){
                    
                    printf("Type the %dº number: \n", i);
                    scanf ("%f", &x);

                    opr = x + opr;

                }                  //turn on     //turn off the color
                    printf ("Result: " green "%.2f" reset "\n", opr);
                    
                    opr = 0; x = 0; nums = 0;
                    
                    

            }

                if (opt == 2) {
                        
                        printf ("Type the first number: ");
                        scanf ("%f", &x);

                        printf ("Type the second number: ");
                        scanf ("%f", &y);

                        opr = x - y;

                                        //turn on     //turn off the color
                        printf ("Result: " green "%.2f" reset "\n", opr);
                        
                }

                    if (opt == 3) {

                        printf ("How many numbers will you multiply: ");
                        scanf ("%d", &nums);
                        
                        opr = 1;

                        for (int i = 1; i <= nums; i++){
                            
                            printf("Type the %dº number: \n", i);
                            scanf ("%f", &x);

                            opr = x * opr;

                        }                  //turn on     //turn off the color
                            printf ("Result: " green "%.2f" reset "\n", opr);

                            opr = 0; x = 0; nums = 0;
                        
                    }

                        if (opt == 4) {
                            
                            printf("Type the 1st number: \n");
                            scanf ("%f", &x);

                            printf ("Type the 2nd number: \n");
                            scanf ("%f", &y);

                        }   if (opt == 4 && y != 0) {
                                
                                

                                            //turn on     //turn off the color
                                printf ("Result: " green "%.2f" reset "\n", x / y);

                                opr = 0; x = 0, y = 0;
                        }   
                        
                            else if (opt == 4 && y == 0) {

                                    printf ( red "It is not possible to divide a number by 0\n" reset);
                                    printf ("Type another number: ");
                                    scanf ("%f", &y);

                                    printf ("%.1f / %.1f = " green "%.2f" reset "\n",x, y , x / y);

                                    opr = 0; x = 0, y = 0;
                                    
                                

                            }
                     
                            if (opt == 5) {
                            
                                double base, expo, result; // double to create a bigger var to the exponentiation

                                printf("Type the base number: \n");
                                scanf ("%lf", &base);

                                printf ("Type the exponent: \n");
                                scanf ("%lf", &expo);

                                result = pow(base, expo); // commands to make the exponentiation works

                                                //turn on     //turn off the color
                                printf ("Result: " green "%.2lf" reset "\n",result );
                                
                                base = 0, expo = 0, result = 0;
                        
                        }

           
        }


       


        return 0;
    }