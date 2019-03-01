#include<iostream>
#include<fstream>
using namespace std;
int main()
{{class node{
                 public :
                 double my_info;
                 class node *my_left;
                 class node *my_right;
                 }



if (this_one.my_info<new_one)
                {
                return make_some_tree(this_one.my_right,new_one);
                }
if (this_one.my_info>new_one)
                {
                return make_some_tree(this_one.my_left,new_one);
                }
}

int RSD(node *this_one)
{
if (this_one!=NULL) {
                            cout<<this_one.my_info<<" ";
                            RSD(this_one.my_left);
                            RSD(this_one.my_right);
                                  }
}


}
