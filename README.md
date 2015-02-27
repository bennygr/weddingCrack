# weddingCrack
A simple, not efficient, prototype and proof of concept for breaking [simple substitution ciphers](http://practicalcryptography.com/ciphers/classical-era/simple-substitution/).

## What is wedding Crack?
A simple, not efficient, prototype and proof of concept for breaking [simple substitution ciphers](http://practicalcryptography.com/ciphers/classical-era/simple-substitution/). It starts with a random key and uses a climbing hill algorithm to get the deciphered text fitter and fitter. This works by [computing the quadgrams of the deciphered text](http://practicalcryptography.com/cryptanalysis/text-characterisation/quadgrams/) and compares them with a list of most common quadrams in a specified language.


##Features / Limitations

  - This program is just a simple example implementation and neither optimized for speed nor for extendibility
  - Place your key guesses into the file guesses.txt
  - German dictionary of [quadgrams](http://practicalcryptography.com/cryptanalysis/text-characterisation/quadgrams/)
    more can be found [here](http://practicalcryptography.com/cryptanalysis/text-characterisation/quadgrams/)

##Build

    cd src
    ./build.sh
  
##Usage
- Place the cypher text into the file input.txt
- Make sure you've copied your quadgrams list of the target's language to ngrams.txt.
- Run the program: ./wdc
- Place your guesses into the file guesses.txt
- Run the program..
- continue until you have the cleartext
