import java.util.Scanner;

class program33
{
    public static void main(String A[])
    {
      
      Scanner scanner = null;
      String name = null;
      int iAge = 0;
      float fMarks= 0.0f;                       

      scanner = new Scanner(System.in); //Scanner --> class name   scanner --->method
      System.out.println("Enter your name");
      String sName = scanner.nextLine();    

      System.out.println("Enter your age :");
      iAge = scanner.nextInt();

      System.out.println("Enter your marks");
      fMarks = scanner.nextFloat();  

      System.out.println("Welcome "  +sName);
      System.out.println("Your age is :" +iAge);
      System.out.println("Your marks are : " +fMarks);



    }
}