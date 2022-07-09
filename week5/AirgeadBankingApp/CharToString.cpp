string nCharString(size_t n, char c) {
  int i = 1;
  string result = "";
  while(i <= n) {
   result += c;
   i++;
  };
  return result;
}
