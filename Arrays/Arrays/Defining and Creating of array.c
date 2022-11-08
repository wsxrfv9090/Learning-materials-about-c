//An aggregate that has a bunch of elements of the same category.
//type_t arr_name [const_n]
//type_t means the data type of the elements in the array
//[const_n] means how many elements there are in the array,
//and it has to be constant or its expression (don't have to use it if its in C99)

//CREATING
//int main()
//{
//	int n = 8;
//	int arr[n];//you can use it under C99 cord.{
//	return 0;
//}

//INITIALIZING
//int main()
//{
//	//int arr[10] = { 1,2,3,4,5,6,7,8,9,0 };//Fully Initializing
//	//int arr[10] = { 1,2,3,4,5 };//Incomplite Initializing
//	//int arr2[] = { 1,2,3,4,5 };
//	////int arr2[5] = { 1,2,3,4,5 };
//	//char ch[5] = { 'b','i','t' };
//	//char ch3[5] = "bit";
//	//char ch4[] = "bit";//initializing like this will creat a /0, which means
//	//                   //this array contains four elements.
//	//char ch5[] = "bit";
//	//char ch6[] = { 'b','i','t' };
//	//printf("%s\n", ch5);
//	//printf("%s\n", ch6);
//
//	return 0;
//}