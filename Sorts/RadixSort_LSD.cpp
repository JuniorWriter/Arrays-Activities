#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

struct list
{
    int key;
    list *next;
};
//pointers to structure to do queue
list* ptr [10], *head[10];

//function that returns the maximum of the table
int maxi (int *t, int n)
{
    int max= t[0];
    for(int i = 1; i<n; i++)
    {
        if (t[i]>max)
        max = t[i];
    }
    return max;
}
//sort
void radx(int *t,int  n )
{
    list * tmp, *temp;  //the queue management
    int exp = 10;                       
    int k, j = 0 , l=1;
    int max = maxi(t,n);        


    for(int i=0; i=max*10/exp; i++)
    {   
    //insertion to queue
        for(int i =0 ; i<n; i++)
        {
            k = ((t[i]%exp)/l); //digit of our position 
            if(head[k] == NULL)
            {
                head[k] = new list;
                head[k]->key = t[i];
                head[k]->next = NULL;
            }
            else
            {
                tmp = head[k];
                tmp->next;
                while (tmp->next)
                {
                    tmp = tmp->next;
                }
                ptr[k] = new list;
                ptr[k] -> key = t[i];
                tmp->next = ptr[k];
                ptr[k]->next = NULL;
            }
        }
        //remove and writeback at table
        for(int i= 0; i<10; i++)
        {
            tmp = head[i];
            while(tmp)
            {   
                t[j] = tmp->key;
                temp = tmp;
                tmp = tmp->next;
                delete temp;
                j++;
            }
            head[i] = NULL;
        }

            exp *= 10;  //next position of number
            l   *= 10;
            j    = 0;
    }


}
void Random (int n, int a, int b, int *t)
{
    for (int i=0; i<n; i++)
    {
        t[i] =  rand()% (b-a+1)+a;  
    }
}
int main()
{   
    srand(time(0));
    int n, a, b;
    system("cls");
    cout<<"How many elements: ";
    cin>>n;
    int *t = new int [n];
    cout<<endl<<"Range from to: ";
    cin>>a>>b;

    Random(n, a, b, t);

    radx(t, n);

    for(int i=0; i<n; i++)
    cout<<t[i]<<" ";


    delete []t;
return 0;
}