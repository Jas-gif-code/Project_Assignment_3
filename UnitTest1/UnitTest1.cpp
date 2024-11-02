
#include "pch.h"
#include "CppUnitTest.h"
#include "../Project_Assignment_3/rps.h"

extern "C" const char* determineOutcome(Choice player1, Choice player2);
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace RockPaperScissorsTests
{
	TEST_CLASS(RpsTests)
    {
    public:

        TEST_METHOD(TestDraw)
        {
            Assert::AreEqual("It's a draw!", determineOutcome(ROCK, ROCK));
            Assert::AreEqual("It's a draw!", determineOutcome(PAPER, PAPER));
            Assert::AreEqual("It's a draw!", determineOutcome(SCISSORS, SCISSORS));
        }

        TEST_METHOD(TestPlayer1Wins)
        {
            Assert::AreEqual("Player 1 wins!", determineOutcome(ROCK, SCISSORS));
            Assert::AreEqual("Player 1 wins!", determineOutcome(PAPER, ROCK));
            Assert::AreEqual("Player 1 wins!", determineOutcome(SCISSORS, PAPER));
        }

        TEST_METHOD(TestPlayer2Wins)
        {
            Assert::AreEqual("Player 2 wins!", determineOutcome(SCISSORS, ROCK));
            Assert::AreEqual("Player 2 wins!", determineOutcome(ROCK, PAPER));
            Assert::AreEqual("Player 2 wins!", determineOutcome(PAPER, SCISSORS));
        }

        TEST_METHOD(TestInvalidChoice)
        {
            Assert::AreEqual("Invalid choice", determineOutcome(INVALID, ROCK));
            Assert::AreEqual("Invalid choice", determineOutcome(ROCK, INVALID));
            Assert::AreEqual("Invalid choice", determineOutcome(INVALID, INVALID));
        }
    };
}