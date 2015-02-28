# weddingCrack
A simple, not efficient, prototype and proof of concept for breaking [simple substitution ciphers](http://practicalcryptography.com/ciphers/classical-era/simple-substitution/).

## What is wedding Crack?
A simple, not efficient, prototype and proof of concept for breaking [simple substitution ciphers](http://practicalcryptography.com/ciphers/classical-era/simple-substitution/). It starts with a random key and uses a climbing hill algorithm to get the deciphered text fitter and fitter. This works by [computing the quadgrams of the deciphered text](http://practicalcryptography.com/cryptanalysis/text-characterisation/quadgrams/) and compares them with a list of most common quadgrams in a specified language.


##Features / Limitations

  - This program is just a simple example implementation and neither optimized for speed nor for extendibility
  - You can define fixed parts of the key (see guesses.txt)
  - German dictionary of [quadgrams](http://practicalcryptography.com/cryptanalysis/text-characterisation/quadgrams/)
    more can be found [here](http://practicalcryptography.com/cryptanalysis/text-characterisation/quadgrams/)

##Building for *NIX

The sources are plain standard C++ (with some C++11 features used)

    cd src
    ./build.sh
  
##Usage
- Place the cypher text into the file input.txt
- Make sure you've copied your quadgram list for the target's language to ngrams.txt.
- Run the program: ./wdc      or      ./wdc | less
- See if you can find some decyphered words which make sense and place your guesses into the file guesses.txt
- Run the program again
- continue until you have the cleartext
