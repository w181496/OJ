package BigInt;
import java.util.Scanner;
import java.io.IOException;
import java.math.BigInteger;
public class Main {

	public static void main(String[] args) {
		Scanner input = new Scanner(System.in);
		String s;
		while(input.hasNext())
		{
			s=input.nextLine();
			String[] str=s.split(" ");
			BigInteger a=new BigInteger(str[0]);
			BigInteger b=new BigInteger(str[2]);
			if(str[1].charAt(0)=='+')
			{
				a=a.add(b);
			}
			else if(str[1].charAt(0)=='-')
			{
				a=a.subtract(b);
			}
			else if(str[1].charAt(0)=='*')
			{
				a=a.multiply(b);
			}
			else if(str[1].charAt(0)=='/')
			{
				a=a.divide(b);
			}
			System.out.println(a);
		}
	}

}
