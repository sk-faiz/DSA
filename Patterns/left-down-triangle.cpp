int star;
cin >> star;
for (int row = 0; row < star; row++) {
  for (int col = 0; col < star - row; col++) {
    cout << "*";
  }
  cout << endl;
}