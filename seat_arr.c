#include <stdio.h>
#include <string.h>

int main()
{
    int available[5][5];
    int i, j;

    printf("Available seats:\n");
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 5; j++)
        {
            available[i][j] = 0;
            if (available[i][j] == 0)
            {
                printf("[A] ");
            }
            else if (available[i][j] == 1)
            {
                printf("[B] ");
            }
        }
        printf("\n");
    }

    int book_or_cancel = 0;
    int num_of_seats;
    int booked = 25;
    printf("Enter 0 to book, 1 to cancel and 2 to exit: ");
    scanf("%d", &book_or_cancel);

    while (book_or_cancel != 2)
    {
        if (book_or_cancel == 0)
        {
            printf("\nHow many seats do you want to reserve? ");
            scanf("%d", &num_of_seats);

            booked -= num_of_seats;

            if (num_of_seats <= booked && num_of_seats > 0)
            {
                for (i = 0; i < num_of_seats; i++)
                {
                    int row, col;
                    printf("\nEnter the row for seat %d: ", i + 1);
                    scanf("%d", &row);
                    printf("Enter the column for seat %d: ", i + 1);
                    scanf("%d", &col);

                    if (row < 0 || row >= 5 || col < 0 || col >= 5)
                    {
                        printf("Invalid seat position. Please try again.\n");
                        i--;
                    }
                    else if (available[row][col] == 1)
                    {
                        printf("Seat [%d][%d] is already booked. Please choose another seat.\n", row, col);
                        i--;
                    }
                    else
                    {
                        available[row][col] = 1;
                    }
                }
            }
            else
            {
                printf("\nInvalid number of seats. Please try again.\n");
            }
        }
        else if (book_or_cancel == 1)
        {
            int row, col;
            printf("\nEnter the seat row: ");
            scanf("%d", &row);
            printf("Enter the seat column: ");
            scanf("%d", &col);

            if (row < 0 || row >= 5 || col < 0 || col >= 5)
            {
                printf("Invalid seat position. Please try again.\n");
            }
            else if (available[row][col] == 0)
            {
                printf("\nSeat [%d][%d] is already available. No need to cancel.\n", row, col);
            }
            else
            {
                available[row][col] = 0;
                booked++;
                printf("Seat [%d][%d] canceled successfully!\n", row, col);
            }
        }
        else
        {
            printf("Invalid Input! Please enter 0, 1, or 2.\n");
        }

        // Print the updated seating arrangement
        printf("\nAvailable Seats: %d\n", booked);
        printf("\nUpdated seats:\n");
        for (i = 0; i < 5; i++)
        {
            for (j = 0; j < 5; j++)
            {
                if (available[i][j] == 0)
                {
                    printf("[A] ");
                }
                else if (available[i][j] == 1)
                {
                    printf("[B] ");
                }
            }
            printf("\n");
        }

        printf("\nEnter 0 to book, 1 to cancel, or 2 to exit: ");
        scanf("%d", &book_or_cancel);
    }
    printf("Thanks for booking. Enjoy the movie!");

    return 0;
}
