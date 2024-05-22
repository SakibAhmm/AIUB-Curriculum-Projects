
import java.util.Scanner;
import classes.*;
import java.io.*;
import interfaces.*;
import fileio.*;


public class Start 
{
	public static void main(String args[])
	{
		Scanner sc = new Scanner(System.in);
		ClientFileReadWrite cfrw=new ClientFileReadWrite();
		EmployeeFileReadWrite efrw=new EmployeeFileReadWrite();

		//MAIN:
		/*try {*/while(true)
		{
			System.out.println("\n\t\t\t\"Welcome to Wedding Management System\"");
			System.out.println("\t\t1. Admin");
			System.out.println("\t\t2. Client");
			System.out.print("Enter Your Choice = ");
			int mainInput = sc.nextInt();

			switch(mainInput)
			{
				case 1:
				System.out.println("");
				System.out.print("Enter ADMIN Name = ");
				String adminId = sc.next();
				System.out.print("Enter ADMIN Password = ");
				String password = sc.next();



				Admin a1=new Admin(adminId,password);
				if(a1.temp==false){break;}
				
				else{
				ADMIN:
				/*try{*/while(true)
				{
					System.out.println("\n\t\t1. Add Employee");
					System.out.println("\t\t2. Remove Employee");
					System.out.println("\t\t3. Show Employees");
					System.out.println("\t\t4. Create A Team");
					System.out.println("\t\t0. Exit To Main Menu");
					System.out.print("Enter Choice = ");
					int adminInput = sc.nextInt();

					/*try{*/switch(adminInput)
					{
						case 1:
						System.out.print("\nEnter Employee Name : ");
						String name=sc.next();
						System.out.print("\nEnter Employee Phone Number : ");
						String phoneNo=sc.next();
						System.out.print("\nEnter Employee Type : ");
						String employeeType=sc.next();
						System.out.print("\nEnter Employee ID : ");
						int employeeId=sc.nextInt();
						System.out.print("\nEnter Employee Salary : ");
						String salary=sc.next();
						Employee e1=new Employee(name,phoneNo,employeeType,employeeId,salary);
						a1.addEmployee(e1);
						efrw.writeInFile(e1.getName());
						efrw.writeInFile(e1.getPhoneNo());
						efrw.writeInFile(e1.getEmployeeType());
						efrw.writeInFile(String.valueOf(e1.getEmployeeId()));
						efrw.writeInFile(e1.getSalary());
						break;

						case 2:
						System.out.print("Enter Employee Id to remove : ");
						int iid=sc.nextInt();
						a1.removeEmployee(iid);
						
						break;

						case 3:
					    
						
						a1.showEmployees();

						break;

						case 4:
						System.out.print("\nEnter Team Number : ");
						int tnum=sc.nextInt();
						System.out.print("\nEnter First employee ID : ");
						int em1Id=sc.nextInt();
						System.out.print("\nEnter Second employee ID : ");
						int em2Id=sc.nextInt();
						a1.createTeam(tnum, em1Id, em2Id);
						break;

						case 0:
						break ADMIN;


					}/*} catch(Exception e)
				{
					System.out.println("Exception Occurred");
				}*/
				}/*}catch(Exception e)
			{
				System.out.println("Exception Occurred");
			}*/
				break;}

				case 2:
				
				CLIENT:
				while(true)
				{
					System.out.println("\n\t\t\t*****Welcome to Wedding Planner*****");
					System.out.print("\tEnter your name : ");
					String name=sc.next();
					System.out.print("\tEnter your Phone No : ");
					String phoneNo=sc.next();
					System.out.print("\tEnter your Email : ");
					String email=sc.next();
					System.out.print("\tEnter your  NId : ");
					String clientNId=sc.next();
					Client c1=new Client(name,phoneNo,email,clientNId); //c1.clientDetails();//ekhaneo shob null hoye ase but error na
					cfrw.writeInFile(c1.getName());
					//cfrw.readFromFile();
					cfrw.writeInFile(c1.getPhoneNo());
					//cfrw.readFromFile();
					cfrw.writeInFile(c1.getEmail());
					//cfrw.readFromFile();
					cfrw.writeInFile(c1.getClientNId());
					//cfrw.readFromFile();
					Package1 p1=new Package1();
					Package2 p2=new Package2();
					Package3 p3=new Package3();
					Package4 p4=new Package4();
					Package5 p5=new Package5();

					PACKAGE:
					while(true)
					{
						System.out.println("\t\t\tWhich package do you want to choose ? ");
						System.out.println("\n\t\t1. Package 1 ");
						p1.showPackageInfo();
						System.out.println("\t\t2. Package 2");
						p2.showPackageInfo();
						System.out.println("\t\t3. Package 3");
						p3.showPackageInfo();
						System.out.println("\t\t4. Package 4");
						p4.showPackageInfo();
						System.out.println("\t\t5. Package 5");
						p5.showPackageInfo();
						
						System.out.print("\tEnter Your Choice : ");
						int packageInput=sc.nextInt();
						int photographerCost=50000;

						


						switch(packageInput)
						{
							case 1:
							c1.clientDetails();
							p1.showPackageInfo();
							System.out.println("\t\t*Do you want to add photographer ? \n\t\t-If you want to add PRESS 1 and If you don't PRESS any Number key");
							int phInput1=sc.nextInt();
							if(phInput1==1){p1.package1Cost+=photographerCost;}
							else
								{
									System.out.println(" ");
									System.out.print("\t\t\t*****Your Registration Confirmed*****");
									System.out.println(" ");
							        break CLIENT;
							 	}
							c1.clientDetails();
							p1.showPackageInfo();
							System.out.println(" ");
							System.out.print("\t\t\t*****Your Registration Confirmed*****");
							System.out.println(" ");
							
							break CLIENT;

							case 2:
							c1.clientDetails();
							p2.showPackageInfo();
							System.out.println("\t\t*Do you want to add Photographer ? \n\t\t-If you want to add PRESS 1 and If you don't, PRESS any Number key");
							int phInput2=sc.nextInt();
							if(phInput2==1){p2.package2Cost+=photographerCost;}
							else
								{
									System.out.println(" ");
									System.out.print("\t\t\t*****Your Registration Confirmed*****");
									System.out.println(" ");
							        break CLIENT;
							 	}
							c1.clientDetails();
							p2.showPackageInfo();
							System.out.println(" ");
							System.out.print("\t\t\t*****Your Registration Confirmed*****");
							System.out.println(" ");
							
							break CLIENT;

							case 3:
							c1.clientDetails();
							p3.showPackageInfo();
							System.out.println("\t\t*Do you want to add Photographer ? \n\t\t-If you want to add PRESS 1 and If you don't, PRESS any Number key");
							int phInput3=sc.nextInt();
							if(phInput3==1){p3.package3Cost+=photographerCost;}
							else
								{
									System.out.println(" ");
									System.out.print("\t\t\t*****Your Registration Confirmed*****");
									System.out.println(" ");
							        break CLIENT;
							 	}
							c1.clientDetails();
							p3.showPackageInfo();
							System.out.println(" ");
							System.out.print("\t\t\t*****Your Registration Confirmed*****");
							System.out.println(" ");
							
							break CLIENT;

							case 4:
							c1.clientDetails();
							p4.showPackageInfo();
							System.out.println("\t\t*Do you want to add Photographer ? \n\t\t-If you want to add PRESS 1 and If you don't, PRESS any Number key");
							int phInput4=sc.nextInt();
							if(phInput4==1){p4.package4Cost+=photographerCost;}
							else
								{
									System.out.println(" ");
									System.out.print("\t\t\t*****Your Registration Confirmed*****");
									System.out.println(" ");
							        break CLIENT;
							 	}
							c1.clientDetails();
							p4.showPackageInfo();
							System.out.println(" ");
							System.out.print("\t\t\t*****Your Registration Confirmed*****");
							System.out.println(" ");
							
							break CLIENT;

							case 5:
							c1.clientDetails();
							p5.showPackageInfo();
							System.out.println("\t\t*Do you want to add Photographer ? \n\t\t-If you want to add PRESS 1 and If you don't, PRESS any Number key");
							int phInput5=sc.nextInt();
							if(phInput5==1){p5.package5Cost+=photographerCost;}
							else
								{
									System.out.println(" ");
									System.out.print("\t\t\t*****Your Registration Confirmed*****");
									System.out.println(" ");
							        break CLIENT;
							 	}
							c1.clientDetails();
							p5.showPackageInfo();
							System.out.println(" ");
							System.out.print("\t\t\t*****Your Registration Confirmed*****");
							System.out.println(" ");

							break CLIENT;

							

						}

					}

				}
			}
		}/*}catch(Exception e)
			{
				System.out.println("Exception Occurred");
			}	*/

	}
}