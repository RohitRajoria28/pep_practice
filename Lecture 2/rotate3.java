public class r{

}
public static void main(string[]args){
    int n=scn.nextInt();
    int r=scn.nextInt();
    int digit =0;
    int temp=n;
    while(temp!=0){
        digit++ ;
        temp/=10;

    }
    r%= digit;
    if (r<0){
        r+=digit;
        if(r<0){

        {
            int mult=1;
            int div=1;
            for(int i=1 ; i<=digit;i++){
                if(i<=r){
                    mult=10;
                }else{
                int rem=n%div;
                int oldVal=n/div;
                n=rem*mult+oldVal;
                cout<<n<< endl;
                                
                }               
            }
        }        
 
        } 
        
         