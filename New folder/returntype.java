import java.util.Scanner;
import java.util.ArrayList;
import java.util.Arraylist;
public class returntype{
    public static Scanner scn=new Scanner(system.in);
    public static void main(String[]args)

    {
        String str="ABCD";
        system.out.println(Subseq(str));


    }
    public static ArrayList<string>subseq(String str){

    

    if(str.length()==0)
    {
        ArrayList<String>base=new ArrayList<>();
        base.add("");
        return base;
    }

    
        char ch=str.charAt(0);

        String ros=str.SubString(1);
        ArrayList<string>recAns=Subseq(ros);
        ArrayList<string> myAns = new ArrayList<>();
        myAns.addAll(recAns);
        for(String s:recAns);
        {
            myAns.add(ch+s);
        }
        return myAns;
    }



}