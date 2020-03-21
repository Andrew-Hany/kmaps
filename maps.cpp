/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{
    int numOfMin;
    cout<<"Enter the numbers of minterms "<<endl;
    cin>>numOfMin;
    int min[numOfMin];
    int arr[2][4];
    for(int i=0;i<numOfMin;i++){
        cout<<"enter the "<<i+1<<"st minterm as a decimal number. "<<endl;
        cin>>min[i];
    }
    for(int j=0;j<2;j++){
       for(int i=0;i<4;i++){
           arr[j][i]=0;
            for(int q=0;q<numOfMin;q++){
            if(i==2)
                {if(min[q]==(i+4*j)+1)
                    arr[j][i]=1;}
                    
                     else if(i==3)
                {if(min[q]==(i+4*j)-1)
                    arr[j][i]=1;}
            else
               if(min[q]==i+4*j)
                    arr[j][i]=1;

            }

       }
    }
    cout<<"kmap ="<<endl;
    for(int j=0;j<2;j++){
        cout<<"   ";
       for(int i=0;i<4;i++){
       cout<<arr[j][i]<<"  "; 
       
       }
     
       cout<<endl;
       
    }
    
    
    
    string a="";
    for(int j=0;j<1;j++){
       for(int i=0;i<1;i++){
       if(arr[j][i]==1)
       {
           if(arr[j][i+1]==1)
           {
                  
               if(arr[j+1][i]==1)
                    {                         //NEW/////////  11??
                        if(arr[j+1][i+1]==1)  /////////   11??      ENDED
                        {                                          ////// 11 1?  
                        if(arr[j][i+2]==1&&arr[j+1][i+2]!=1)       /////  11 0?  YES            
                        {
                             if(arr[j][i+3]==1&&arr[j+1][i+3]!=1)
                             a="B`+A`";
                             else if(arr[j][i+3]==1&&arr[j+1][i+3]==1)
                             a="B`+A`+C`";
                               else if(arr[j][i+3]!=1&&arr[j+1][i+3]==1)
                            a="B`+AC`+A`C+";
                             else a="B`+A`C";
                        }
                        else if(arr[j][i+2]==1&&arr[j+1][i+2]==1)            //////// 111?
                        {                                                    ///////  111? YES
                             if(arr[j][i+3]==1&&arr[j+1][i+3]!=1)
                             a="B`+A`+C";
                             else if(arr[j][i+3]==1&&arr[j+1][i+3]==1)
                             a="1";
                               else if(arr[j][i+3]!=1&&arr[j+1][i+3]==1)
                             a="B`+A+C";
                             else a="B`+C";
                            
                        }else if(arr[j][i+2]!=1&&arr[j+1][i+2]==1)         /////// 11 0?
                        {                                                 ///////  11 1?   YES
                             if(arr[j][i+3]==1&&arr[j+1][i+3]!=1)
                             a="B`+A`C`+AC";
                             else if(arr[j][i+3]==1&&arr[j+1][i+3]==1)
                             a="B`+A+C`";
                               else if(arr[j][i+3]!=1&&arr[j+1][i+3]==1)
                             a="B`+A";
                             else a="B`+AC";
                            
                        }
                        else 
                            if(arr[j][i+3]==1&&arr[j+1][i+3]!=1){
                                a="B`+A`C`";
                            }else 
                            if(arr[j][i+3]==1&&arr[j+1][i+3]==1){
                                a="B`+C`"; 
                                
                            }
                            else if(arr[j][i+3]!=1&&arr[j+1][i+3]==1){
                                a="B`+AC`"; 
                                
                            }else a="B`";
                                                                       //NEW//////  11 ?? 
                                                                       /////      10 0?   ENDED
                    } else {                                
                        
                        
                        if(arr[j][i+2]==1&&arr[j+1][i+2]!=1)         //// 11 1?               
                        {                                            ///  10 0?   YES
                             if(arr[j][i+3]==1&&arr[j+1][i+3]!=1)
                             a="B`C`+A`";
                             else if(arr[j][i+3]==1&&arr[j+1][i+3]==1)
                             a="A`+C`";
                               else if(arr[j][i+3]!=1&&arr[j+1][i+3]==1)
                             a="B`C`+A`B`+A`C+AC`";
                             else a="B`C`+A`B`+A`C";
                            
                        }
                        else if(arr[j][i+2]==1&&arr[j+1][i+2]==1)            //////// 111?
                        {                                                    ///////  101? YES
                             if(arr[j][i+3]==1&&arr[j+1][i+3]!=1)
                             a="B`C`+A`+BC";
                             else if(arr[j][i+3]==1&&arr[j+1][i+3]==1)
                             a="A`+B+C`";
                               else if(arr[j][i+3]!=1&&arr[j+1][i+3]==1)
                             a="A`B`+AC`+BC";
                             else a="B`C`+A`B`+BC";
                            
                        }else if(arr[j][i+2]!=1&&arr[j+1][i+2]==1)         /////// 11 0?
                        {                                                 ///////  10 1?   YES
                             if(arr[j][i+3]==1&&arr[j+1][i+3]!=1)
                             a="B`C`+A`B`+A`C`+ABC";
                             else if(arr[j][i+3]==1&&arr[j+1][i+3]==1)
                             a="A`B`+AB+C`";
                               else if(arr[j][i+3]!=1&&arr[j+1][i+3]==1)
                             a="A`B`+AB+AC`";
                             else a="A`B`+B`C`+ABC";
                            
                        }
                        else 
                            if(arr[j][i+3]==1&&arr[j+1][i+3]!=1){
                                a="A`B`+B`C`+A`C`";
                            }else 
                            if(arr[j][i+3]==1&&arr[j+1][i+3]==1){
                                a="A`B`+C`"; 
                                
                            }
                            else if(arr[j][i+3]!=1&&arr[j+1][i+3]==1){
                                a="A`B`+AC`"; 
                                
                            }else a="B`C`+A`B`";
                            
                    }
                     //2 new 
////////////////////////////////////////////////////////////////////////////////////////////////////
                    }else {                         //NEW/////////  11??
                        if(arr[j+1][i+1]==1)        /////////       01??     ENDED 
                        {                                          ////// 11 1?  
                        if(arr[j][i+2]==1&&arr[j+1][i+2]!=1)       /////  01 0?  YES            
                        {
                             if(arr[j][i+3]==1&&arr[j+1][i+3]!=1)
                             a="A`+B`C";
                             else if(arr[j][i+3]==1&&arr[j+1][i+3]==1)
                             a="A`+B`C+BC`";
                               else if(arr[j][i+3]!=1&&arr[j+1][i+3]==1)
                             a="A`B`+B`C+A`C+ABC`";
                             else a="A`B`+B`C+A`C";
                            
                        }
                        else if(arr[j][i+2]==1&&arr[j+1][i+2]==1)            //////// 111?
                        {                                                    ///////  011? YES
                             if(arr[j][i+3]==1&&arr[j+1][i+3]!=1)
                             a="A`+C";
                             else if(arr[j][i+3]==1&&arr[j+1][i+3]==1)
                             a="A`+C+B";
                               else if(arr[j][i+3]!=1&&arr[j+1][i+3]==1)
                             a="A`B`+C+AB";
                             else a="A`B`+C";
                            
                        }else if(arr[j][i+2]!=1&&arr[j+1][i+2]==1)         /////// 11 0?
                        {                                                 ///////  01 1?   YES
                             if(arr[j][i+3]==1&&arr[j+1][i+3]!=1)
                             a="A`C`+B`C+AC";
                             else if(arr[j][i+3]==1&&arr[j+1][i+3]==1)
                             a="A`C`+B`C+AB";
                               else if(arr[j][i+3]!=1&&arr[j+1][i+3]==1)
                             a="A`B`+B`C+AB";
                             else a="A`C`+B`C+AC";
                            
                        }
                        else 
                            if(arr[j][i+3]==1&&arr[j+1][i+3]!=1){
                                a="B`C+A`C`";
                            }else 
                            if(arr[j][i+3]==1&&arr[j+1][i+3]==1){
                                a="B`C+A`C`+BC`"; 
                                
                            }
                            else if(arr[j][i+3]!=1&&arr[j+1][i+3]==1){
                                a="A`B`+B`C+ABC`"; 
                                
                            }else a="A`B`+B`C";
                                                                       //NEW//////  11 ?? 
                                                                       /////      00 ??  ENDED 
                    } else {                                
                        
                        
                        if(arr[j][i+2]==1&&arr[j+1][i+2]!=1)         //// 11 1?               
                        {                                            ///  00 0?   YES
                             if(arr[j][i+3]==1&&arr[j+1][i+3]!=1)
                             a="A`";
                             else if(arr[j][i+3]==1&&arr[j+1][i+3]==1)
                             a="A`+BC`";
                               else if(arr[j][i+3]!=1&&arr[j+1][i+3]==1)
                             a="A`B`+A`C+ABC`";
                             else a="A`B`+A`C";
                            
                        }
                        else if(arr[j][i+2]==1&&arr[j+1][i+2]==1)            //////// 111?
                        {                                                    ///////  001? YES
                             if(arr[j][i+3]==1&&arr[j+1][i+3]!=1)
                             a="A`+BC";
                             else if(arr[j][i+3]==1&&arr[j+1][i+3]==1)
                             a="A`+B";
                               else if(arr[j][i+3]!=1&&arr[j+1][i+3]==1)
                             a="A`B`+BC`+AB";
                             else a="A`B`+BC";
                            
                        }else if(arr[j][i+2]!=1&&arr[j+1][i+2]==1)         /////// 11 0?
                        {                                                 ///////  00 1?   YES
                             if(arr[j][i+3]==1&&arr[j+1][i+3]!=1)
                             a="A`B`+A`C`+ABC";
                             else if(arr[j][i+3]==1&&arr[j+1][i+3]==1)
                             a="A`B`+A`C`+AB";
                               else if(arr[j][i+3]!=1&&arr[j+1][i+3]==1)
                             a="A`B`+AB";
                             else a="A`B`+ABC";
                            
                        }
                        else 
                            if(arr[j][i+3]==1&&arr[j+1][i+3]!=1){
                                a="A`B`+A`C`";
                            }else 
                            if(arr[j][i+3]==1&&arr[j+1][i+3]==1){
                                a="A`B`+BC`"; 
                                
                            }
                            else if(arr[j][i+3]!=1&&arr[j+1][i+3]==1){
                                a="A`B`+ABC`"; 
                                
                            }else a="A`B`";
                            
                    }
                }
///////////////////////////////////////////////////////////////////////////////////////////////////
                      
            }
//////////// 1 0 ? ?
///////////  ? ? ? ?
            else{
      //////////// 1 0 ? ?
///////////        1 ? ? ?          
                  
               if(arr[j+1][i]==1)
                    {                         //NEW/////////  10??
                        if(arr[j+1][i+1]==1)  /////////       11??   ENDED    
                        {                                          ////// 10 1?  
                        if(arr[j][i+2]==1&&arr[j+1][i+2]!=1)       /////  11 0?  YES            
                        {
                             if(arr[j][i+3]==1&&arr[j+1][i+3]!=1)
                             a="AB`+A`B+B`C`";
                             else if(arr[j][i+3]==1&&arr[j+1][i+3]==1)
                             a="AB`+A`B+C`";
                               else if(arr[j][i+3]!=1&&arr[j+1][i+3]==1)
                             a="B`C`+AB`+AC`+A`BC";
                             else a="B`C`+AB`+A`BC";
                            
                        }
                        else if(arr[j][i+2]==1&&arr[j+1][i+2]==1)            //////// 101?
                        {                                                    ///////  111? YES
                             if(arr[j][i+3]==1&&arr[j+1][i+3]!=1)
                             a="AB`+BC+A`C`";
                             else if(arr[j][i+3]==1&&arr[j+1][i+3]==1)
                             a="A+B+C`";
                               else if(arr[j][i+3]!=1&&arr[j+1][i+3]==1)
                             a="A+B`C`+BC";
                             else a="B`C`+BC+AC";
                            
                        }else if(arr[j][i+2]!=1&&arr[j+1][i+2]==1)         /////// 10 0?
                        {                                                 ///////  11 1?   YES
                             if(arr[j][i+3]==1&&arr[j+1][i+3]!=1)
                             a="B`C`+AC+A`C`";
                             else if(arr[j][i+3]==1&&arr[j+1][i+3]==1)
                             a="A+C`";
                               else if(arr[j][i+3]!=1&&arr[j+1][i+3]==1)
                             a="B`C`+A";
                             else a="B`C`+AC";
                            
                        }
                        else 
                            if(arr[j][i+3]==1&&arr[j+1][i+3]!=1){
                                a="AB`+A`C`";
                            }else 
                            if(arr[j][i+3]==1&&arr[j+1][i+3]==1){
                                a="AB`+C`"; 
                                
                            }
                            else if(arr[j][i+3]!=1&&arr[j+1][i+3]==1){
                                a="B`C`+AC`+AB`"; 
                                
                            }else a="B`C`+AB`";
                            
                                                                       //NEW//////  10 ?? 
                                                                       /////      10 ??   ENDED
                    } else {                                
                        
                        
                        if(arr[j][i+2]==1&&arr[j+1][i+2]!=1)         //// 10 1?               
                        {                                            ///  10 0?   YES
                             if(arr[j][i+3]==1&&arr[j+1][i+3]!=1)
                             a="B`C`+A`B";
                             else if(arr[j][i+3]==1&&arr[j+1][i+3]==1)
                             a="A`B+C`";
                               else if(arr[j][i+3]!=1&&arr[j+1][i+3]==1)
                             a="B`C`+AC`+A`BC";
                             else a="B`C`+A`BC";
                            
                        }
                        else if(arr[j][i+2]==1&&arr[j+1][i+2]==1)            //////// 101?
                        {                                                    ///////  101? YES
                             if(arr[j][i+3]==1&&arr[j+1][i+3]!=1)
                             a="B`C`+BC+A`B";
                             else if(arr[j][i+3]==1&&arr[j+1][i+3]==1)
                             a="B+C`";
                               else if(arr[j][i+3]!=1&&arr[j+1][i+3]==1)
                             a="AB+BC+B`C`";
                             else a="B`C`+BC";
                            
                        }else if(arr[j][i+2]!=1&&arr[j+1][i+2]==1)         /////// 10 0?
                        {                                                 ///////  10 1? YES  
                             if(arr[j][i+3]==1&&arr[j+1][i+3]!=1)
                             a="B`C`+A`C`+ABC";
                             else if(arr[j][i+3]==1&&arr[j+1][i+3]==1)
                             a="C`+AB";
                               else if(arr[j][i+3]!=1&&arr[j+1][i+3]==1)
                             a="AB+B`C`";
                             else a="B`C`+ABC";
                            
                        }
                        else 
                            if(arr[j][i+3]==1&&arr[j+1][i+3]!=1){
                                a="B`C`+A`C`";
                            }else 
                            if(arr[j][i+3]==1&&arr[j+1][i+3]==1){
                                a="C`"; 
                                
                            }
                            else if(arr[j][i+3]!=1&&arr[j+1][i+3]==1){
                                a="B`C`+AC`"; 
                                
                            }else a="B`C`";
                            
                    }
                     //2 new 
////////////////////////////////////////////////////////////////////////////////////////////////////
                    }else {                         //NEW/////////  10??
                        if(arr[j+1][i+1]==1)        /////////       01??     
                        {                                          ////// 10 1?  
                        if(arr[j][i+2]==1&&arr[j+1][i+2]!=1)       /////  01 0?  YES            
                        {
                             if(arr[j][i+3]==1&&arr[j+1][i+3]!=1)
                             a="A`C`+A`B+AB`C";
                             else if(arr[j][i+3]==1&&arr[j+1][i+3]==1)
                             a="A`C`+A`B+BC`+AB`C";
                               else if(arr[j][i+3]!=1&&arr[j+1][i+3]==1)
                             a="A`B`C`+AB`C+A`BC+ABC`";
                             else a="A`B`C`+AB`C+A`BC";
                            
                        }
                        else if(arr[j][i+2]==1&&arr[j+1][i+2]==1)            //////// 101?
                        {                                                    ///////  011? YES
                             if(arr[j][i+3]==1&&arr[j+1][i+3]!=1)
                             a="A`C`+AC+BC";
                             else if(arr[j][i+3]==1&&arr[j+1][i+3]==1)
                             a="A`C`+AC+B";
                               else if(arr[j][i+3]!=1&&arr[j+1][i+3]==1)
                             a="A`B`C`+BC+AB+AC";
                             else a="A`B`C`+BC+AC";
                            
                        }else if(arr[j][i+2]!=1&&arr[j+1][i+2]==1)         /////// 10 0?
                        {                                                 ///////  01 1?   YES
                             if(arr[j][i+3]==1&&arr[j+1][i+3]!=1)
                             a="A`C`+AC";
                             else if(arr[j][i+3]==1&&arr[j+1][i+3]==1)
                             a="A`C`+AC+BC`";
                               else if(arr[j][i+3]!=1&&arr[j+1][i+3]==1)
                             a="A`B`C`+AC+AB";
                             else a="AC+A`B`C`";
                            
                        }
                        else 
                            if(arr[j][i+3]==1&&arr[j+1][i+3]!=1){
                                a="A`C`+AB`C";
                            }else 
                            if(arr[j][i+3]==1&&arr[j+1][i+3]==1){
                                a="A`C`+AB`C+BC`"; 
                                
                            }
                            else if(arr[j][i+3]!=1&&arr[j+1][i+3]==1){
                                a="A`B`C`+AB`C+ABC`"; 
                                
                            }else a="A`B`C`+AB`C";
                                                                       //NEW//////  10 ?? 
                                                                       /////      00 ??   
                    } else {                                
                        
                        
                        if(arr[j][i+2]==1&&arr[j+1][i+2]!=1)         //// 10 1?               
                        {                                            ///  00 0?   YES
                             if(arr[j][i+3]==1&&arr[j+1][i+3]!=1)
                             a="A`C`+A`B";
                             else if(arr[j][i+3]==1&&arr[j+1][i+3]==1)
                             a="A`C`+A`B+BC`";
                               else if(arr[j][i+3]!=1&&arr[j+1][i+3]==1)
                             a="A`B`C`+A`BC+ABC`";
                             else a="A`B`C`+A`BC";
                            
                        }
                        else if(arr[j][i+2]==1&&arr[j+1][i+2]==1)            //////// 101?
                        {                                                    ///////  001? YES
                             if(arr[j][i+3]==1&&arr[j+1][i+3]!=1)
                             a="A`C`+BC";
                             else if(arr[j][i+3]==1&&arr[j+1][i+3]==1)
                             a="A`C`+B";
                               else if(arr[j][i+3]!=1&&arr[j+1][i+3]==1)
                             a="A`B`C`+BC+AB";
                             else a="A`B`C`+BC";
                            
                        }else if(arr[j][i+2]!=1&&arr[j+1][i+2]==1)         /////// 10 0?
                        {                                                 ///////  00 1?   YES
                             if(arr[j][i+3]==1&&arr[j+1][i+3]!=1)
                             a="A`C`+ABC";
                             else if(arr[j][i+3]==1&&arr[j+1][i+3]==1)
                             a="A`C`+AB";
                               else if(arr[j][i+3]!=1&&arr[j+1][i+3]==1)
                             a="A`B`C`+AB";
                             else a="A`B`C`+ABC";
                            
                        }
                        else 
                            if(arr[j][i+3]==1&&arr[j+1][i+3]!=1){
                                a="A`C`";
                            }else 
                            if(arr[j][i+3]==1&&arr[j+1][i+3]==1){
                                a="A`C`+BC`"; 
                                
                            }
                            else if(arr[j][i+3]!=1&&arr[j+1][i+3]==1){
                                a="A`B`C`+ABC`"; 
                                
                            }else a="A`B`C`";
                            
                    }
                }
///////////////////////////////////////////////////////////////////////////////////////////////////
             
            }
/////////////////////////////////////////////////////////////////////////////////////////////                    
      } else {
          
           if(arr[j][i+1]==1)
           {
                  
               if(arr[j+1][i]==1)
                    {                         //NEW/////////  01??
                        if(arr[j+1][i+1]==1)  /////////   11??      ENDED
                        {                                          ////// 01 1?  
                        if(arr[j][i+2]==1&&arr[j+1][i+2]!=1)       /////  11 0?  YES            
                        {
                             if(arr[j][i+3]==1&&arr[j+1][i+3]!=1)
                             a="BC+AB`+A`B";
                             else if(arr[j][i+3]==1&&arr[j+1][i+3]==1)
                             a="AB`+A`C+BC`";
                               else if(arr[j][i+3]!=1&&arr[j+1][i+3]==1)
                            a="AC`+B`C+A`C";
                             else a="AB`+A`C";
                        }
                        else if(arr[j][i+2]==1&&arr[j+1][i+2]==1)            //////// 011?
                        {                                                    ///////  111? YES
                             if(arr[j][i+3]==1&&arr[j+1][i+3]!=1)
                             a="AB`+A`B+C";
                             else if(arr[j][i+3]==1&&arr[j+1][i+3]==1)
                             a="A+C+B";
                               else if(arr[j][i+3]!=1&&arr[j+1][i+3]==1)
                             a="A+C";
                             else a="AB`+C";
                            
                        }else if(arr[j][i+2]!=1&&arr[j+1][i+2]==1)         /////// 01 0?
                        {                                                 ///////  11 1?   YES
                             if(arr[j][i+3]==1&&arr[j+1][i+3]!=1)
                             a="AB`+B`C+AC+A`BC`";
                             else if(arr[j][i+3]==1&&arr[j+1][i+3]==1)
                             a="B`C+A+BC`";
                               else if(arr[j][i+3]!=1&&arr[j+1][i+3]==1)
                             a="B`C+A";
                             else a="AB`+AC+B`C";
                            
                        }
                        else 
                            if(arr[j][i+3]==1&&arr[j+1][i+3]!=1){
                                a="AB`+B`C+A`BC`";
                            }else 
                            if(arr[j][i+3]==1&&arr[j+1][i+3]==1){
                                a="AB`+BC`+B`C"; 
                                
                            }
                            else if(arr[j][i+3]!=1&&arr[j+1][i+3]==1){
                                a="B`C+AC`"; 
                                
                            }else a="AB`+B`C";
                                                                       //NEW//////  01 ?? 
                                                                       /////      10 0?   
                    } else {                                
                        
                        
                        if(arr[j][i+2]==1&&arr[j+1][i+2]!=1)         //// 01 1?               
                        {                                            ///  10 0?   YES
                             if(arr[j][i+3]==1&&arr[j+1][i+3]!=1)
                             a="A`B`C`+A`C+A`B";
                             else if(arr[j][i+3]==1&&arr[j+1][i+3]==1)
                             a="AC`+A`B+A`C";
                               else if(arr[j][i+3]!=1&&arr[j+1][i+3]==1)
                             a="AC`+A`C";
                             else a="AB`C`+A`C";
                            
                        }
                        else if(arr[j][i+2]==1&&arr[j+1][i+2]==1)            //////// 011?
                        {                                                     ///////  101? YES
                             if(arr[j][i+3]==1&&arr[j+1][i+3]!=1)
                             a="AB`C`+A`C+A`B+BC";
                             else if(arr[j][i+3]==1&&arr[j+1][i+3]==1)
                             a="B+AC`+A`C";
                               else if(arr[j][i+3]!=1&&arr[j+1][i+3]==1)
                             a="A`C+AC`+BC";
                             else a="AB`C`+A`C+BC";
                            
                        }else if(arr[j][i+2]!=1&&arr[j+1][i+2]==1)         /////// 0 00?
                        {                                                 ///////  10 1?  YES
                             if(arr[j][i+3]==1&&arr[j+1][i+3]!=1)
                             a="AB`C`+ABC+A`BC`";
                             else if(arr[j][i+3]==1&&arr[j+1][i+3]==1)
                             a="AC`+AB+BC`";
                               else if(arr[j][i+3]!=1&&arr[j+1][i+3]==1)
                             a="AB+AC`";
                             else a="AB`C`+ABC";
                            
                        }
                        else 
                            if(arr[j][i+3]==1&&arr[j+1][i+3]!=1){
                                a="AB`C`+A`BC`";
                            }else 
                            if(arr[j][i+3]==1&&arr[j+1][i+3]==1){
                                a="AC`+BC`"; 
                                
                            }
                            else if(arr[j][i+3]!=1&&arr[j+1][i+3]==1){
                                a="AC`"; 
                                
                            }else a="AB`C`";
                            
                    }
                     //2 new 
////////////////////////////////////////////////////////////////////////////////////////////////////
                    }else {                         //NEW/////////  01??
                        if(arr[j+1][i+1]==1)        /////////       01??   ENDED  
                        {                                          ////// 01 1?  
                        if(arr[j][i+2]==1&&arr[j+1][i+2]!=1)       /////  01 0?     YES         
                        {
                             if(arr[j][i+3]==1&&arr[j+1][i+3]!=1)
                             a="A`B+B`C";
                             else if(arr[j][i+3]==1&&arr[j+1][i+3]==1)
                             a="A`B+B`C++BC`";
                               else if(arr[j][i+3]!=1&&arr[j+1][i+3]==1)
                             a="B`C+A`C+ABC`";
                             else a="A`C+B`C";
                            
                        }
                        else if(arr[j][i+2]==1&&arr[j+1][i+2]==1)            //////// 011?
                        {                                                    ///////  011? YES
                             if(arr[j][i+3]==1&&arr[j+1][i+3]!=1)
                             a="A`B+C";
                             else if(arr[j][i+3]==1&&arr[j+1][i+3]==1)
                             a="C+B";
                               else if(arr[j][i+3]!=1&&arr[j+1][i+3]==1)
                             a="C+AB";
                             else a="C";
                            
                        }else if(arr[j][i+2]!=1&&arr[j+1][i+2]==1)         /////// 01 0?
                        {                                                 ///////  01 1?  YES 
                             if(arr[j][i+3]==1&&arr[j+1][i+3]!=1)
                             a="B`C+AC+ABC`";
                             else if(arr[j][i+3]==1&&arr[j+1][i+3]==1)
                             a="B`C+AB+BC`";
                               else if(arr[j][i+3]!=1&&arr[j+1][i+3]==1)
                             a="B`C+AB";
                             else a="B`C+AC";
                            
                        }
                        else 
                            if(arr[j][i+3]==1&&arr[j+1][i+3]!=1){
                                a="B`C+A`BC`";
                            }else 
                            if(arr[j][i+3]==1&&arr[j+1][i+3]==1){
                                a="B`C+BC`"; 
                                
                            }
                            else if(arr[j][i+3]!=1&&arr[j+1][i+3]==1){
                                a="A`B`+B`C+ABC`"; 
                                
                            }else a="ABC`+B`C";
                                                                       //NEW//////  01 ?? 
                                                                       /////      00 ??  ENDED
                    } else {                                
                        
                        
                        if(arr[j][i+2]==1&&arr[j+1][i+2]!=1)         //// 01 1?               
                        {                                            ///  00 0?   YES
                             if(arr[j][i+3]==1&&arr[j+1][i+3]!=1)
                             a="A`C+A`B";
                             else if(arr[j][i+3]==1&&arr[j+1][i+3]==1)
                             a="A`C+BC`";
                               else if(arr[j][i+3]!=1&&arr[j+1][i+3]==1)
                             a="A`C+ABC`";
                             else a="A`C";
                            
                        }
                        else if(arr[j][i+2]==1&&arr[j+1][i+2]==1)            //////// 011?
                        {                                                    ///////  001? YES
                             if(arr[j][i+3]==1&&arr[j+1][i+3]!=1)
                             a="A`C+BC+A`B";
                             else if(arr[j][i+3]==1&&arr[j+1][i+3]==1)
                             a="A`C+B";
                               else if(arr[j][i+3]!=1&&arr[j+1][i+3]==1)
                             a="A`C+AB";
                             else a="A`C+BC";
                            
                        }else if(arr[j][i+2]!=1&&arr[j+1][i+2]==1)         /////// 01 0?
                        {                                                 ///////  00 1? YES  
                             if(arr[j][i+3]==1&&arr[j+1][i+3]!=1)
                             a="A`B`C+ABC+A`BC`";
                             else if(arr[j][i+3]==1&&arr[j+1][i+3]==1)
                             a="A`B`C+AB+BC`";
                               else if(arr[j][i+3]!=1&&arr[j+1][i+3]==1)
                             a="A`B`C+AB";
                             else a="A`B`C+ABC";
                            
                        }
                        else 
                            if(arr[j][i+3]==1&&arr[j+1][i+3]!=1){
                                a="A`B`C+A`BC`";
                            }else 
                            if(arr[j][i+3]==1&&arr[j+1][i+3]==1){
                                a="A`B`C+BC`"; 
                                
                            }
                            else if(arr[j][i+3]!=1&&arr[j+1][i+3]==1){
                                a="ABC`+A`B`C"; 
                                
                            }else a="A`B`C";
                            
                    }
                }
///////////////////////////////////////////////////////////////////////////////////////////////////
                      
            }
//////////// 0 0 ? ?
///////////  ? ? ? ?
            else{
      //////////// 0 0 ? ?
///////////        1 ? ? ?          
                  
               if(arr[j+1][i]==1)
                    {                         //NEW/////////  00??
                        if(arr[j+1][i+1]==1)  /////////       11??  ENDED    
                        {                                          ////// 00 1?  
                        if(arr[j][i+2]==1&&arr[j+1][i+2]!=1)       /////  11 0?    YES         
                        {
                             if(arr[j][i+3]==1&&arr[j+1][i+3]!=1)
                             a="AB`+A`B";
                             else if(arr[j][i+3]==1&&arr[j+1][i+3]==1)
                             a="AB`+A`B+AC`";
                               else if(arr[j][i+3]!=1&&arr[j+1][i+3]==1)
                             a="AB`+AC`+A`BC";
                             else a="AB`+A`BC";
                            
                        }
                        else if(arr[j][i+2]==1&&arr[j+1][i+2]==1)            //////// 001?
                        {                                                    ///////  111? YES
                             if(arr[j][i+3]==1&&arr[j+1][i+3]!=1)
                             a="AB`+BC+A`B";
                             else if(arr[j][i+3]==1&&arr[j+1][i+3]==1)
                             a="A+B";
                               else if(arr[j][i+3]!=1&&arr[j+1][i+3]==1)
                             a="A+BC";
                             else a="BC+AB`";
                            
                        }else if(arr[j][i+2]!=1&&arr[j+1][i+2]==1)         /////// 00 0?
                        {                                                 ///////  11 1?  YES
                             if(arr[j][i+3]==1&&arr[j+1][i+3]!=1)
                             a="AB`+AC+A`BC`";
                             else if(arr[j][i+3]==1&&arr[j+1][i+3]==1)
                             a="A+BC`";
                               else if(arr[j][i+3]!=1&&arr[j+1][i+3]==1)
                             a="A";
                             else a="AC`+AC";
                            
                        }
                        else 
                            if(arr[j][i+3]==1&&arr[j+1][i+3]!=1){
                                a="AB`+A`BC`";
                            }else 
                            if(arr[j][i+3]==1&&arr[j+1][i+3]==1){
                                a="AB`+BC`"; 
                                
                            }
                            else if(arr[j][i+3]!=1&&arr[j+1][i+3]==1){
                                a="AC`+AB`"; 
                                
                            }else a="AB`";
                            
                                                                       //NEW//////  00 ?? 
                                                                       /////      10 ??   
                    } else {                                
                        
                        
                        if(arr[j][i+2]==1&&arr[j+1][i+2]!=1)         //// 00 1?               
                        {                                            ///  10 0?   YES
                             if(arr[j][i+3]==1&&arr[j+1][i+3]!=1)
                             a="AB`C`+A`B";
                             else if(arr[j][i+3]==1&&arr[j+1][i+3]==1)
                             a="A`B+AC`";
                               else if(arr[j][i+3]!=1&&arr[j+1][i+3]==1)
                             a="AC`+A`BC";
                             else a="AB`C`+A`BC";
                            
                        }
                        else if(arr[j][i+2]==1&&arr[j+1][i+2]==1)            //////// 001?
                        {                                                    ///////  101? YES
                             if(arr[j][i+3]==1&&arr[j+1][i+3]!=1)
                             a="AB`C`+BC+A`B";
                             else if(arr[j][i+3]==1&&arr[j+1][i+3]==1)
                             a="B+AC`";
                               else if(arr[j][i+3]!=1&&arr[j+1][i+3]==1)
                             a="AC`+BC";
                             else a="AB`C`+BC";
                            
                        }else if(arr[j][i+2]!=1&&arr[j+1][i+2]==1)         /////// 00 0?
                        {                                                 ///////  10 1? YES
                             if(arr[j][i+3]==1&&arr[j+1][i+3]!=1)
                             a="AB`C`+A`BC`+ABC";
                             else if(arr[j][i+3]==1&&arr[j+1][i+3]==1)
                             a="BC`+AB+AC`";
                               else if(arr[j][i+3]!=1&&arr[j+1][i+3]==1)
                             a="AB+AC`";
                             else a="AB`C`+ABC";
                            
                        }
                        else 
                            if(arr[j][i+3]==1&&arr[j+1][i+3]!=1){
                                a="AB`C`+A`BC`";
                            }else 
                            if(arr[j][i+3]==1&&arr[j+1][i+3]==1){
                                a="AC`+BC`"; 
                                
                            }
                            else if(arr[j][i+3]!=1&&arr[j+1][i+3]==1){
                                a="AC`"; 
                                
                            }else a="AB`C`";
                            
                    }
                     //2 new 
////////////////////////////////////////////////////////////////////////////////////////////////////
                    }else {                         //NEW/////////  00??
                        if(arr[j+1][i+1]==1)        /////////       01??     ENDED
                        {                                          ////// 00 1?  
                        if(arr[j][i+2]==1&&arr[j+1][i+2]!=1)       /////  01 0?       YES      
                        {
                             if(arr[j][i+3]==1&&arr[j+1][i+3]!=1)
                             a="A`B+AB`C";
                             else if(arr[j][i+3]==1&&arr[j+1][i+3]==1)
                             a="AB`C+A`B+BC`";
                               else if(arr[j][i+3]!=1&&arr[j+1][i+3]==1)
                             a="AB`C+A`BC+ABC`";
                             else a="AB`C+A`BC";
                            
                        }
                        else if(arr[j][i+2]==1&&arr[j+1][i+2]==1)            //////// 001?
                        {                                                    ///////  011? YES
                             if(arr[j][i+3]==1&&arr[j+1][i+3]!=1)
                             a="AC+A`B";
                             else if(arr[j][i+3]==1&&arr[j+1][i+3]==1)
                             a="AC+B";
                               else if(arr[j][i+3]!=1&&arr[j+1][i+3]==1)
                             a="BC+AB+AC";
                             else a="BC+AC";
                            
                        }else if(arr[j][i+2]!=1&&arr[j+1][i+2]==1)         /////// 00 0?
                        {                                                 ///////  01 1?  YES   
                             if(arr[j][i+3]==1&&arr[j+1][i+3]!=1)
                             a="A`BC`+AC";
                             else if(arr[j][i+3]==1&&arr[j+1][i+3]==1)
                             a="AB+AC+BC`";
                               else if(arr[j][i+3]!=1&&arr[j+1][i+3]==1)
                             a="AC+AB";
                             else a="AC";
                            
                        }
                        else 
                            if(arr[j][i+3]==1&&arr[j+1][i+3]!=1){
                                a="AB`C+A`BC`";
                            }else 
                            if(arr[j][i+3]==1&&arr[j+1][i+3]==1){
                                a="AB`C+BC`"; 
                                
                            }
                            else if(arr[j][i+3]!=1&&arr[j+1][i+3]==1){
                                a="AB`C+ABC`"; 
                                
                            }else a="AB`C";
                                                                       //NEW//////  00 ?? 
                                                                       /////      00 ??   
                    } else {                                
                        
                        
                        if(arr[j][i+2]==1&&arr[j+1][i+2]!=1)         //// 00 1?               
                        {                                            ///  00 0?   YES
                             if(arr[j][i+3]==1&&arr[j+1][i+3]!=1)
                             a="A`B";
                             else if(arr[j][i+3]==1&&arr[j+1][i+3]==1)
                             a="A`B+BC`";
                               else if(arr[j][i+3]!=1&&arr[j+1][i+3]==1)
                             a="A`BC+ABC`";
                             else a="A`BC";
                            
                        }
                        else if(arr[j][i+2]==1&&arr[j+1][i+2]==1)            //////// 001?
                        {                                                    ///////  001? YES
                             if(arr[j][i+3]==1&&arr[j+1][i+3]!=1)
                             a="A`C+BC";
                             else if(arr[j][i+3]==1&&arr[j+1][i+3]==1)
                             a="B";
                               else if(arr[j][i+3]!=1&&arr[j+1][i+3]==1)
                             a="BC+AB";
                             else a="BC";
                            
                        }else if(arr[j][i+2]!=1&&arr[j+1][i+2]==1)         /////// 00 0?
                        {                                                 ///////  00 1?   
                             if(arr[j][i+3]==1&&arr[j+1][i+3]!=1)
                             a="A`BC`+ABC";
                             else if(arr[j][i+3]==1&&arr[j+1][i+3]==1)
                             a="BC`+AB";
                               else if(arr[j][i+3]!=1&&arr[j+1][i+3]==1)
                             a="AB";
                             else a="ABC";
                            
                        }
                        else 
                            if(arr[j][i+3]==1&&arr[j+1][i+3]!=1){
                                a="A`BC`";
                            }else 
                            if(arr[j][i+3]==1&&arr[j+1][i+3]==1){
                                a="BC`"; 
                                
                            }
                            else if(arr[j][i+3]!=1&&arr[j+1][i+3]==1){
                                a="ABC`"; 
                                
                            }else a="0";
                            
                    }
                }
///////////////////////////////////////////////////////////////////////////////////////////////////
             
            }
/////////////////////////////////////////////////////////////////////////////////////////////                    
      }
   
     }
     }
 
cout<<"F = "<<endl<<"   "<<a;
    return 0;
}
 

