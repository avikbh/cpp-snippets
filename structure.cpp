
#include <iostream>
#include <deque>

using namespace std;


struct Books {
  int book_id;
  const char *p;
  
  Books(int id,const char *x):p(x) {
        book_id = id;
    }
  
   ~Books()
    {
        // printf("Destructor this = %x\n",*this);
        // printf("Destructor char *p = %d\n",p);

    }
};
typedef struct Books Boo;

deque <Boo> tmpdq;

int tempFunc2(const char *p){
        printf("tempFunc2 p = %d\n",p);
        printf("tempFunc2 &(*p) = %d\n",&(*p));
}
static int count = 0;
int tempFunc3() {
    
    std:string tmp("Book1");
    
    char arrtmp [] = {'B','o','o','k','2'};
    printf("Inside tempFunc3&(*p) = %d\n",&(*arrtmp));
      
    Boo Book1 = {1,arrtmp};//object 1
    
    Boo Book2 = Book1;//deepcopy object 2

    tmpdq.push_back(Book2);//again deepcopy object 3
    
}

int main() 
{
    
            printf("1\n");

    tempFunc3();
    
            printf("2\n");

    
    
    tempFunc3();
            printf("3\n");

    //tempFunc3();
    
    // "BOOK1 has not gone out of scope"
    //printf("tmpdq.front() - Book2->p address= %d\n",&(tmpdq.front().p));
    //printf("tmpdq.front() - Book2->p value= %s\n",(tmpdq.front().p));
    

    return 0;
}
