#include<iostream>
using namespace std;
int main()
{
  // int score; //declare int type variable
  // cout<<"Enter the score:"<<endl; //enter score
  // cin>>score;
  // if(score<300){
  //   cout<<"India wins"<<endl;
  // }
  // else{
  //   cout<<"Pak wins";}



//   int marks;
//   cout<<"ENTER MARKS-";
//   cin>>marks;

  
  
//   // #nested-if_else


  
//   // if(marks>=90){
//   //   cout<<"Grade A"<<endl;
//   // }
//   // else{
//   //   if(marks>=80){
//   //     cout<<"Grade B";
//   //   }
//   //   else{
//   //     if(marks>=70){
//   //       cout<<"Grade C"<<endl;
//   //     }
//   //       else{
//   //         if(marks>=60){
//   //           cout<<"Grade D";
//   //         }
//   //         else{
//   //           cout<<"Fail";
//   //         }
//   //       }
//   //     }
//   //   }
//   // }


  
//   //If-elseif-else

// if(marks>=90){
//   cout<<"A";
// }
// else if(marks>=80){
//   cout<<"B";
// }
// else if(marks>=70){
//   cout<<"C";
// }
// }

// int bronum;
// cout<<"Enter number of bros";
// cin>>bronum;

//     if(bronum==0){
//       cout<<"Baat ban jaye";
//     }
//     else{
//       cout<<"Baat nahi banegi";
//     }
// }

// for(int i=0; i<10;i=i+1){
//   cout<<i<<endl;
// // }
//         for(int i=1;i<=10;i=i+1){
//           cout<<2*i<<endl;
//   }
// cout<<"next->"<<endl;
//         for(int i=0;i<=5;i=i+2){
//            cout<<i<<endl;
//   }
// cout<<"next->"<<endl;
//         for(int i=1;i<=5;i=i+2){
//            cout<<i<<endl;
//   }
// for(int i=50; i>0;i=i/2){
//   cout<<i<<endl;
// }



  //outer loop-row obv
  //inner lop-col obv
// for(int row=0;row<3;row+=1){
//   for(int col=0;col<5;col+=1){
//     cout<<"*  ";
//   }
//   cout<<endl;
// }



// Square-pattern
  // int n;
  // cin>>n;
  //    for(int row=0;row<n;row+=1)
  //      {
  //        for(int col=0;col<n;col+=1){
  //          cout<<"   *    ";
  //        }
  //        cout<<endl;
  //      }
    

  
  
  
  
  
//   //hollow rectangle
  
// int rowCount,colCount;
//   cout<<"Enter rows-";
//   cin>>rowCount;
//   cout<<"Enter Column-";
//   cin>>colCount;
//      for(int row=0;row<rowCount;row=row+1)
//        {
//          //row0 and row2
//          if(row==0 || row==rowCount-1){
//            for(int col=0;col<colCount;col++)
//            {
//              cout<<"*    ";
//            }
//          }
//            //remaining rows
//          else{
//            cout<<"*    ";
//            for(int i=0;i<colCount-2;i++)
//              {
//                cout<<"     ";
//              }
//            cout<<"*    ";
//          }
//          cout<<endl;
//        }



  
//   //HALF-PYRAMID
  
//   int num_rows;
// cout<<"Enter number of rows-";
// cin>>num_rows;

//   for(int row=0;row<num_rows;row++)
//     {
//       for(int col=0;col<row+1;col++)
//         {
//           cout<<"*";
//         }
//       cout<<endl;
      
//     }



//inverted half-pyramid

//     int num_ros;
// cout<<"Enter number of rows-";
// cin>>num_ros;

//   for(int row=0;row<num_ros;row++)
//     {
//       for(int col=0;col<num_ros-row;col++)
//         {
//           cout<<"*";
//         }
//       cout<<endl;
      
//     }




  // numeric half-pyramid

// int n;
// cout<<"Enter number of rows-";
// cin>>n;
  
//   for(int row=0;row<n;row++)
//     {
//       for(int col=0;col<row+1;col++)
//       {
//         cout<<col+1;
//       }
//       cout<<endl;
//     }







// inverted numeric half-pyramid

  
int n;
cout<<"Enter number of rows-";
cin>>n;
  
  for(int row=0;row<n;row++)
    {
      for(int col=0;col<n-row;col++)
      {
        cout<<col+1;
      }
      cout<<endl;
    }

}