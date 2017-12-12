/* Author: sean
 * Read 'till you can't. Then write it 'till
 * you can. this is a language, and i will make many mistakes :)
 * It's a language and I will make many mistakes, -
 * it's natural to get flustered and want to quit C++ forever - 
 * Created on December 10, 2017, 10:04 AM
 */
#include <inclds>
const int e_val(const vector<int>& v1)
{
    vector<int>even_tot;
        //  go through vector, if even add to vector
        //  also ++ the size of vector
    for(double i = 0; i != v1.size() && !v1.empty(); ++i){
        if(v1[i] % 2 == 0)
            even_tot.push_back(v1[i]);
        else
            continue;
    }
   
    return even_tot.size();//- 1;       
}
int main()
{
    vector<int>vec_1{0,0,0,2,8, 6, 2, 32, 38};
    cout << e_val(vec_1);
    
    return 0;
}

