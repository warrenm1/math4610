# 

**Routine Name:**          maceps



**Author:** Michael A. Warren



**Language:** C++. This file can be compiled using a gcc compiler.


For example,



    gcc smaceps.cpp



will produce an executable **./a.exe** than can be executed. If you want a different name, the following will work a bit

better



    gcc -o smaceps smaceps.cpp



**Description/Purpose:** This routine will compute the single precision value for the machine epsilon or the number of digits

in the representation of real numbers in single precision. This is a routine for analyzing the behavior of any computer. This

usually will need to be run one time for each computer.



**Input:** There are no inputs needed in this case. Even though there are arguments supplied, the real purpose is to

return values in those variables.



**Output:** This routine returns a single precision value for the number of decimal digits that can be represented on the

computer being queried.



**Usage/Example:**



The routine has no arguments needed to return the values of the precision in terms of the smallest number that can be

represented. Since the code is written in terms of a c++ subroutine, the values of the machine machine epsilon and

the power of two that gives the machine epsilon. 



      ./maceps


Output from the lines above:



	



The first value (24) is the number of binary digits that define the machine epsilon and the second is related to the

decimal version of the same value. The number of decimal digits that can be represented is roughly eight digits.



**Implementation/Code:** The following is the code for smaceps()



      subroutine smaceps(seps, ipow)

    c

    c set up storage for the algorithm

    c --------------------------------

    c

          real seps, one, appone

    c

    c initialize variables to compute the machine value near 1.0

    c ----------------------------------------------------------

    c

          one = 1.0

          seps = 1.0

          appone = one + seps

    c

    c loop, dividing by 2 each time to determine when the difference between one and

    c the approximation is zero in single precision

    c --------------------------------------------- 

    c

          ipow = 0

          do 1 i=1,1000

             ipow = ipow + 1

    c

    c update the perturbation and compute the approximation to one

    c ------------------------------------------------------------

    c

            seps = seps / 2

            appone = one + seps

    c

    c do the comparison and if small enough, break out of the loop and return

    c control to the calling code

    c ---------------------------

    c

            if(abs(appone-one) .eq. 0.0) return

    c

        1 continue

    c

    c if the code gets to this point, there is a bit of trouble

    c ---------------------------------------------------------

    c

          print *,"The loop limit has been exceeded"

    c

    c done

    c ----

    c

          return

    end



**Last Modified:** September/2018
