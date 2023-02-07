int star;
cin >> star;
for (int row = 0; row < star; row++) {
  for (int col = 0; col < star; col++) {
    if (row == 0 || row == star - 1) {
      cout << "*";
    } else {
      if (col == 0 || col == star - 1) {
        cout << "*";
      } else {
        cout << " ";
      }
    }
  }
  cout << endl;
}