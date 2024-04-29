#include<iostream>
using namespace std;
class Matrix
{
	public:
	int matrix[2][2];
	int data[2][2];
public:
	Matrix()
	{
		for(int i=0;i<2;++i){
		for(int j=0;j<2;++j){
	    data[i][j]=0;
	}
		    
	}
	    
	}
Matrix operator+(const Matrix &other)
{
Matrix result;
	for(int i=0;i<2;++i){
	
		for(int j=0;j<2;++j){
		
		result.data[i][j]=data[i][j]+other.data[i][j];
}}
    return result;
}
Matrix operator-(const Matrix &other)
{
Matrix result;
	for(int i=0;i<2;++i){
	
		for(int j=0;j<2;++j){
		
		result.data[i][j]=data[i][j]-other.data[i][j];
}}
    return result;
}
Matrix operator*(const Matrix &other)
{
Matrix result;
	for(int i=0;i<2;++i){
	
		for(int j=0;j<2;++j){
		
		result.data[i][j]=data[i][j]*other.data[i][j];
}}
    return result;
}
/*Matrix operator<<(ostream &output,Matrix&A)
{
Matrix result;
	for(int i=0;i<2;++i){
	
		for(int j=0;j<2;++j){
		
		result.data[i][j]=data[i][j]*other.data[i][j];
}}
    return result;
    
}
Matrix operator>>(istream &input,Matrix &A)
{
Matrix result;
	for(int i=0;i<2;++i){
	
		for(int j=0;j<2;++j){
		
		result.data[i][j]=data[i][j]*other.data[i][j];
}}
    return result;
}
Matrix operator<<(ostream &output,M)
{
Matrix result;
	for(int i=0;i<2;++i){
	
		for(int j=0;j<2;++j){
		
		result.data[i][j]=data[i][j]*other.data[i][j];
}}
    return result;
}
Matrix operator*(const Matrix &other)
{
Matrix result;
	for(int i=0;i<2;++i){
	
		for(int j=0;j<2;++j){
		
		result.data[i][j]=data[i][j]*other.data[i][j];
}}
    return result;
}*/
void display()
{
for(int i=0;i<2;++i){
		for(int j=0;j<2;++j){
		cout<<data[i][j];	
}}}

    
    cout<<"Enter the operation to perform"
}
};
int main()
{
    int input()
{  
    for(int i=0;i<2;++i){
		for(int j=0;j<2;++j){
    cout<<"Enter the matrix";
    cin>>data[i][j];
		}}
    return 0;
   
    }
	Matrix A,B;
	Matrix C=A+B;
	C.display();
	Matrix D=A-B;
	D.display();
	Matrix E=A*B;
	E.display();
	A.input();
}
