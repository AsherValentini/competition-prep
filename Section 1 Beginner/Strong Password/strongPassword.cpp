int minimumNumber(int n, std::string password) {
    // Define character sets
    std::string special_characters = "!@#$%^&*()-+";
    std::unordered_set<char> specialSet(special_characters.begin(), special_characters.end());

    bool lowerFound = false, upperFound = false, numberFound = false, specialFound = false;

    // Check existing character types in the password
    for (char c : password) {
        if (islower(c)) lowerFound = true;
        if (isupper(c)) upperFound = true;
        if (isdigit(c)) numberFound = true;
        if (specialSet.count(c)) specialFound = true;
    }

    // Count missing character types
    int missing = (!lowerFound) + (!upperFound) + (!numberFound) + (!specialFound);

    // Ensure the final password has at least 6 characters
    return std::max(missing, 6 - n);
}
