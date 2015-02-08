/***********************************************************************************************
Copyright (c) 2015, Martin Suda

Permission is hereby granted, free of charge, to any person obtaining a copy of this software and
associated documentation files (the "Software"), to deal in the Software without restriction,
including without limitation the rights to use, copy, modify, merge, publish, distribute,
sublicense, and/or sell copies of the Software, and to permit persons to whom the Software is
furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in all copies or
substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR IMPLIED, INCLUDING BUT
NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND
NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM,
DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT
OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.
**************************************************************************************************/

extern "C"
{
#include "ff.h"
#include "output.h"
}

int main(int argc, char** argv)
{
  main_orig(argc,argv); 
  
  printf("Relevant facts:\n");
  for (int i = 0; i < gnum_relevant_facts; i++) {
    print_ft_name(i);
    printf("\n");
  }
  printf("\n");
  
  printf("Actions:\n");
  for (Action* a = gactions; a; a = a->next ) {
    print_Action(a);
  }
  printf("\n");
  
  printf("Initial state:\n");
  for (int i = 0; i < ginitial_state.num_F; i++ ) {
    print_ft_name(ginitial_state.F[i]);
    printf("\n");
  }
  printf("\n");
  
  printf("Goal state:\n");
  for (int i = 0; i < ggoal_state.num_F; i++ ) {
    print_ft_name(ggoal_state.F[i]);
    printf("\n");
  }
  printf("\n");
  
  return 0;
}
