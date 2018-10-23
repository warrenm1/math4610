# Vector Inner Product 
This routine performs the dot product on two vectors of the same size

**Routine Name:**           vect_inner

**Author:** Michael A. Warren

**Language:** C++. This code can be used using a GNU C++ compiler(gcc)

For example,

    gcc vect_in_prod.cpp

will produce an executable **./a.exe** than can be executed. If you want a different name, the following will work a bit
better

    gcc -o vect_inner vect_in_prod.cpp

**Description/Purpose:** This routine takes two vectors, and multiply the corresponding elements and sums them all together.

**Input:** This routine needs two vectors of the same numerical type.

**Output:** This routine returns a single value of the same numerical type as the vector

**Usage/Example:**

<basic example>
<give the output of the exampled input, if needed>
<how to interpret the output>

**Implementation/Code:** The following is the code for vect_inner()

    #include<vector>
    
    template<typename T>
    T vect_inner(std::vector<T> v, std::vector<T> u){
        T prod = 0;
    
        for(int i = 0; i < v.size(); i++)
            prod += (v[i] * u[i]);
    
        return prod;
    }//vect_inner


**Last Modified:** October/2018
