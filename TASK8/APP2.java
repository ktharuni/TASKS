//Average of three numbers in methods in java

class average{
public static void avg(int a,int b,int c)
{
    int result;
    result=(a+b+c)/3;
    System.out.println("Average of three numbers="+result);
}
public static void main(String[] args) {
    avg(20,30,60);
    avg(45,8,30);  
  }
}