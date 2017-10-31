#include <iostream>
using namespace std;
int main()
{
	    int numA, numB;
	        int Da, Db;

		    cin >> numA >> Da >> numB >> Db;

		        int tempNumA = 0;
			    int tempNumB = 0;
			        while (numA != 0)
					    {
						            if (numA % 10 == Da)
								            {
										                tempNumA = tempNumA * 10 + Da;
												        }
							            numA =numA/ 10;
								        }
				    while (numB != 0)
					        {
							        if (numB%10 == Db)
									        {
											            tempNumB = tempNumB * 10 + Db;
												            }
								        numB =numB/ 10;
									    }
				        long long relt = tempNumA + tempNumB;
					    cout << relt << endl;
					        return 0;
}
