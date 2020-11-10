import  java.util.Scanner;
public class fib{
    public static void main(string[]args){

        int n=scn.nextInt();
        int a=0;
        int b=1;
        if(n>=1){
            system.out.println(a+ " ");
            if(n==1){
                return;
            if (n>=2){
                system.out.println(b+ " ");
                if(n==2){
                    return ;

                }
            }   for (int i=;i< n; i++){
                int sum=a+b;
                a=b;
                b=sum;
                System.out.println(sum+ " ");
                system.out.println();
                system.out.println(sum);
            }
            }
        }
    }
}