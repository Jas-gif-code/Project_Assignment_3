#include "pch.h"
#include "CppUnitTest.h"
extern "C" {
#include "../Project_Assignment_3/rps.c"
}
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace Unittest
{
	TEST_CLASS(Unittest)
	{
	public:
		
        TEST_METHOD(Player1Wins)
        {
            Assert::AreEqual("Player1", determine_winner("Rock", "Scissors"));
            Assert::AreEqual("Player1", determine_winner("Paper", "Rock"));
            Assert::AreEqual("Player1", determine_winner("Scissors", "Paper"));
        }

        TEST_METHOD(Player2Wins)
        {
            Assert::AreEqual("Player2", determine_winner("Rock", "Paper"));
            Assert::AreEqual("Player2", determine_winner("Paper", "Scissors"));
            Assert::AreEqual("Player2", determine_winner("Scissors", "Rock"));
        }

        TEST_METHOD(Draw)
        {
            Assert::AreEqual("Draw", determine_winner("Rock", "Rock"));
            Assert::AreEqual("Draw", determine_winner("Paper", "Paper"));
            Assert::AreEqual("Draw", determine_winner("Scissors", "Scissors"));
        }

        TEST_METHOD(InvalidInput)
        {
            Assert::AreEqual("Invalid", determine_winner("Rock", "rock"));
            Assert::AreEqual("Invalid", determine_winner("Paper", "Scissor"));
            Assert::AreEqual("Invalid", determine_winner("Stone", "Scissors"));
            Assert::AreEqual("Invalid", determine_winner("Paper", "Papers"));
            Assert::AreEqual("Invalid", determine_winner("Scissor", "Rock"));
        }
    };
}
