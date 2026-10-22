/*

Check Voting Eligibility

Accept age from the user and determin whether the person is eligible for voting or not. A person who is eligible for voting
must be 18 years to vote. Negative age should be considered as invalid age.

Expected Output:

Input : 21  -----> Eligible for voting
Input : 17  -----> Not eligible for voting
Input : -10 -----> Invalid age

*/


#include<stdio.h>
#include<stdlib.h>

void CheckVotingEligibility(int iAge)
{
    if(iAge < 0)
    {
        printf("Invalid age\n");
    }
    else if(iAge >= 18)
    {
        printf("Eligible for voting\n");
    }
    else
    {
        printf("Not eligible for voting\n");
    }
}

int main()
{
    int iAge = 0;

    printf("Enter your age\n");
    scanf("%d", &iAge);
    CheckVotingEligibility(iAge);

    return EXIT_SUCCESS;
}
