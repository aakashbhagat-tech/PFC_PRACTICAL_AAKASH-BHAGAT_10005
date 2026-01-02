#include <stdio.h>

#define TOTAL_SEATS 10

/* Function declarations */
void initializeSeats(int seats[]);
void displaySeats(int seats[]);
void bookSeat(int seats[]);
void cancelSeat(int seats[]);

int main() {
    int seats[TOTAL_SEATS];
    int choice;

    initializeSeats(seats);

    do {
        printf("\n--- Railway Ticket Booking System ---\n");
        printf("1. View Seat Status\n");
        printf("2. Book a Seat\n");
        printf("3. Cancel Booking\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                displaySeats(seats);
                break;

            case 2:
                bookSeat(seats);
                break;

            case 3:
                cancelSeat(seats);
                break;

            case 4:
                printf("Thank you for using the Railway Ticket Booking System.\n");
                break;

            default:
                printf("Invalid choice! Please try again.\n");
        }

    } while (choice != 4);

    return 0;
}

/* Initialize all seats as available */
void initializeSeats(int seats[]) {
    int i;
    for (i = 0; i < TOTAL_SEATS; i++) {
        seats[i] = 0;
    }
}

/* Display seat status */
void displaySeats(int seats[]) {
    int i;
    printf("\nSeat Status:\n");
    for (i = 0; i < TOTAL_SEATS; i++) {
        if (seats[i] == 0)
            printf("Seat %d: Available\n", i + 1);
        else
            printf("Seat %d: Booked\n", i + 1);
    }
}

/* Book a seat */
void bookSeat(int seats[]) {
    int seatNumber;

    printf("Enter seat number to book (1-%d): ", TOTAL_SEATS);
    scanf("%d", &seatNumber);

    if (seatNumber < 1 || seatNumber > TOTAL_SEATS) {
        printf("Invalid seat number!\n");
    } else if (seats[seatNumber - 1] == 1) {
        printf("Seat already booked!\n");
    } else {
        seats[seatNumber - 1] = 1;
        printf("Seat %d booked successfully.\n", seatNumber);
    }
}

/* Cancel a booking */
void cancelSeat(int seats[]) {
    int seatNumber;

    printf("Enter seat number to cancel (1-%d): ", TOTAL_SEATS);
    scanf("%d", &seatNumber);

    if (seatNumber < 1 || seatNumber > TOTAL_SEATS) {
        printf("Invalid seat number!\n");
    } else if (seats[seatNumber - 1] == 0) {
        printf("Seat is already available.\n");
    } else {
        seats[seatNumber - 1] = 0;
        printf("Booking for seat %d cancelled successfully.\n", seatNumber);
    }
}
// Aakash Bhagat | ERP = 10005
//OUTPUT - 4
//--- Railway Ticket Booking System ---
// 1. View Seat Status
// 2. Book a Seat
// 3. Cancel Booking
// 4. Exit
// Enter your choice: 2
// Enter seat number to book (1-10): 5
// Seat 5 booked successfully.