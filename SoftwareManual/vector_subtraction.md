# Vector Subtraction 
This routine takes two vectors and returns the difference between the elements

**Routine Name:**           vect_sub

**Author:** Michael A. Warren

**Language:** C++. This code can be used using a GNU C++ compiler(gcc)

For example,

    gcc vector_subtraction.cpp

will produce an executable **./a.exe** than can be executed. If you want a different name, the following will work a bit
better

    gcc -o vect_sub vector_subtraction.cpp

**Description/Purpose:** This routine takes two vectors and checks to see if they are the same size. If not, it adds '0's to the end of the shorter one. Then it takes the difference of each vector, element by element, and returns the result.

**Input:** This routine requires two vectors containing elements of type double.

**Output:** This routine returns a single vector containing the difference of the two of type double.

**Usage/Example:**

<basic example>
<give the output of the exampled input, if needed>
<how to interpret the output>

**Implementation/Code:** The following is the code for vect_sub()

    #include<iostream>
    #include<vector>
    
    //This function takes two vectors and makes them the same size
    void toSameSize(std::vector<double>& v, std::vector<double>& u){
        if(u.size() > v.size())
            toSameSize(u,v);
    
        while(v.size() - u.size()) > 0)
            u.push_back(0);
    
        return;
    }//toSameSize
    
    //This function takes two vectors and takes the difference of their elements
    std::vector vect_sub(std::vector<double> v, std::vector<double> u){
        std::vector<double> w;
    
        if(v.size() - u.size() != 0)
            toSameSize(v,u);
    
        for(int i = 0; i < v.size(); i++)
            w.push_back(v[i] - u[i]);
    
        return w;
    }//vect_sub


**Last Modified:** October/2018
