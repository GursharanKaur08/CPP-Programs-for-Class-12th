//Enter two arrays and the output will be the merge of two arrays.

# include <iostream.h>
# include <conio.h>
 main()
 {	 int arr1[100],arr2[100],arr3[100],c,i=0,j=0,k=0,size1,size2;
  	clrscr();
 	cout<<"\n enter no of element of arr1 ";
 	cin>>size1;
 	for (i=0;i<size1;i++)
 	{	 cout<<"\n enter no. ";
 		cin>>arr1[i];
 	}
 	cout<<"\n enter no of element of arr2 ";
 	cin>>size2;
 	for (i=0;i<size2;i++)
 	{	 cout<<"\n enter no. ";
 		cin>>arr2[i];
 	}
 	cout<<"\n arr1  ";
 	for (i=0;i<size1;i++)
 			cout<<"   "<<arr1[i];
	 cout<<"\n arr2  ";
 	for (i=0;i<size2;i++)
 	
		cout<<"   "<<arr2[i];
	 i=0;j=0;k=0;
  	while (i<size1 && j<size2)
  	{	   if (arr1[i]<arr2[j])
   		   	arr3[k++]=arr1[i++];
		   else if (arr2[j]<arr1[i])
  			 arr3[k++]=arr2[j++];
		   else
     			i++;
   	}
    	while (i<size1)
  		  arr3[k++]=arr1[i++];
	 while (j<size2)
    		arr3[k++]=arr2[j++];
cout<<"\n arr3  ";
 for (i=0;i<k;i++)
    cout<<"   "<<arr3[i];
 getch();
}
