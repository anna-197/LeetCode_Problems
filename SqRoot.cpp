 int beg = 1, end = x;
        long long mid, sqRoot = x;
        
        while (beg <= end) {
            mid = beg + (end - beg) / 2;
            long long midSquare = mid * mid;
            
            if (midSquare == x) {
                return mid;
            } else if (midSquare > x) {
                end = mid - 1;
            } else {
                sqRoot = mid;
                beg = mid + 1;
            }
        }
        return sqRoot;