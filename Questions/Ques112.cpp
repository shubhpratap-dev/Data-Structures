ofstream my_file("example.txt");

// check if the file has been opened properly
if (!my_file) {

    // print error message
    cout << "Error opening the file." << endl;

    // terminate the main() function
    return 1;
}
