# Vector Scalar Multiplication 
This routine takes a vector and multiplies each element by a scalar

**Routine Name:**           vect_scal_mult

**Author:** Michael A. Warren

**Language:** C++. This code can be used using a GNU C++ compiler(gcc)

For example,

    gcc vector_mult_scalar.cpp

will produce an executable **./a.exe** than can be executed. If you want a different name, the following will work a bit
better

    gcc -o vect_scal_mult vector_mult_scalar.cpp

**Description/Purpose:** This routine takes a vector and a scalar, and multiplies the scalar into each element of the vector

**Input:** This routine takes a vector by referene and a scalar, both of any numerical type

**Output:** This routine doesn't output anthing directly, for it modifies the single vector by reference

**Usage/Example:**

<basic example>
<give the output of the exampled input, if needed>
<how to interpret the output>

**Implementation/Code:** The following is the code for vect_scal_mult()

    #intluce<vector>
    
    template<class T>
    void vect_scal_mult(std::vector<T>& v, T s){
        for(int i = 0; i < v.size(); i++)
            v[i] = v[i] * s;
    
        return;
    }//vect_scal_mult


**Last Modified:** October/2018
