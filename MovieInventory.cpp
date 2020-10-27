/// Muhammad Ibrahim
/// 30 October 2020
/// Movie Inventory Lab
/// EXTRA: Ask the user to enter a new movie title and add its cost and renters to the program

#include <iostream>
#include <iomanip>
#include <math.h>

using namespace std;

int main()
{
    double DancesCost, DancesRenters, MightyCost, MightyRenters, SnoringCost, SnoringRenters, UserMovieCost, UserMovieRenters, total, average;
    string UserMovie;

    //Ask for variable values while error checking
    //Dances
    cout << "How much is Dances?     ";
    cin >> DancesCost;
    //Error check if the value is greater than or equal to 0, do this every time a cost value is asked for
    while (DancesCost < 0) {
        cout << "Please do not enter a negative number"
            << "\nHow much is Dances?     ";
        cin >> DancesCost;
    }

    cout << "How many are renting Dances?     ";
    cin >> DancesRenters;
    //Error check is the value is greater than or equal to 0 and a whole number, do this every time a renter value is asked for
    while (DancesRenters < 0 || floor(DancesRenters) != DancesRenters) {
        cout << "Please do not enter a negative number or a decimal"
            << "\nHow many are renting Dances?     ";
        cin >> DancesRenters;
    }

    //Mighty
    cout << "How much is Mighty?     ";
    cin >> MightyCost;
    while (MightyCost < 0) {
        cout << "Please do not enter a negative number"
            << "\nHow much is Mighty?     ";
        cin >> MightyCost;
    }

    cout << "How many are renting Mighty?     ";
    cin >> MightyRenters;
    while (MightyRenters < 0 || floor(MightyRenters) != MightyRenters) {
        cout << "Please do not enter a negative number or a decimal"
            << "\nHow many are renting Mighty?     ";
        cin >> MightyRenters;
    }

    //Snoring
    cout << "How much is Snoring?     ";
    cin >> SnoringCost;
    while (SnoringCost < 0) {
        cout << "Please do not enter a negative number"
            << "\nHow much is Snoring?     ";
        cin >> SnoringCost;
    }

    cout << "How many are renting Snoring?     ";
    cin >> SnoringRenters;
    while (SnoringRenters < 0 || floor(SnoringRenters) != SnoringRenters) {
        cout << "Please do not enter a negative number or a decimal"
            << "\nHow many are renting Snoring?     ";
        cin >> SnoringRenters;
    }

    //New Movie
    cout << "What is the name of the fourth movie (make sure to use a one-word title)?     ";
    cin >> UserMovie;

    while (UserMovie.length() >= 30) {
        cout << "That movie title it too long!\n"
            << "What is the name of the fourth movie?     ";
        cin >> UserMovie;
    }

    cout << "How much is " + UserMovie + "?     ";
    cin >> UserMovieCost;
    while (UserMovieCost < 0) {
        cout << "Please do not enter a negative number"
            << "\nHow much is " + UserMovie + "?     ";
        cin >> UserMovieCost;
    }

    cout << "How many are renting " + UserMovie + "?     ";
    cin >> UserMovieRenters;
    while (UserMovieRenters < 0 || floor(UserMovieRenters) != UserMovieRenters) {
        cout << "Please do not enter a negative number or a decimal"
            << "\nHow many are renting " + UserMovie + "?     ";
        cin >> UserMovieRenters;
    }

    cout << endl;

    //Print the table of information
    cout << fixed;

    //table
    cout << setw(0) << "Movie Title" << setw(22) << "Cost" << setw(19) << "# Renting" << endl;
    cout << setw(0) << "Dances with Muskrats" << setw(10) << "$" << setprecision(2) << DancesCost << setw(10) << setprecision(0) << DancesRenters << endl;
    cout << setw(0) << "D3-The Mighty Dentists" << setw(8) << "$" << setprecision(2) << MightyCost << setw(10) << setprecision(0) << MightyRenters << endl;
    cout << setw(0) << "While You Were Snoring" << setw(8) << "$" << setprecision(2) << SnoringCost << setw(10) << setprecision(0) << SnoringRenters << endl;
    cout << setw(0) << UserMovie << setw(30 - UserMovie.length()) << "$" << setprecision(2) << UserMovieCost << setw(10) << setprecision(0) << UserMovieRenters << endl;


    cout << setprecision(2) << endl;

    //Calculate and print the total and average
    total = (DancesCost * DancesRenters) + (MightyCost * MightyRenters) + (SnoringCost * SnoringRenters) + (UserMovieCost * UserMovieRenters);
    average = total / (DancesRenters + MightyRenters + SnoringRenters + UserMovieRenters);

    cout << "The total value of all rentals is: $"
        << total << endl
        << "The average value is: $"
        << average << endl;
}