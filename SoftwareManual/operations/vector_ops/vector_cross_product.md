# Vector Cross Product
This routine performs the Cross Product upon two vectors

**Routine Name:**           vect_cross

**Author:** Michael A. Warren

**Language:** C++. This code can be used using a GNU C++ compiler(gcc)

For example,

    gcc vect_cross_prod.cpp

will produce an executable **./a.exe** than can be executed. If you want a different name, the following will work a bit
better

    gcc -o vect_cross vect_cross_prod.cpp

**Description/Purpose:** This routine takes two vectors of the same length, and performs the Cross Product on them, creating a matrix

**Input:** This routine requires two vectors of the same length of the same type.

**Output:** This routine returns a square matrix of the same type as the vectors passed in

**Usage/Example:**

<basic example>
<give the output of the exampled input, if needed>
<how to interpret the output>

**Implementation/Code:** The following is the code for vect_cross()

    #include<vector>
    
    template<typename T>
    std::vector vect_cross(std::vector<T> v, std::vector<T> u){
        std::vector<T> A[][];
    
        for(int i = 0; i < v.size(); i++)
            for(int j = 0; j < u.size(); j++)
                A[i][j] = v[i] * u[j];
    
        return A;
    }//vect_cross


**Last Modified:** October/2018
