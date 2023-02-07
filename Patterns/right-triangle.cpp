int star;
cin >> star;
for (int row = 0; row < star; row++) {
  for (int spc = 0; spc < star - row; spc++) {
    cout << " ";
  }
  for (int col = 0; col < row; col++) {
    cout << "*";
  }
  cout << endl;
}