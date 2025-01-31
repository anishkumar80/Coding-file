questions = [
    {
        "question":"How many keywords in python?",
        "option":["A. 35", "B. 36", "C. 37", "D. 32"],
        "answer":"B"
        },
    {
        "question":"what is the capital of Bihar",
        "option":["A. Patan", "B. Pantn", "C. Patna", "D. Patn"],
        "answer":"C"
        },
    {
        "question":"Which function is used to find length of string",
        "option":["A. len()", "B. str()", "C. length()", "D. strlen()"],
        "answer":"A"
        },
    {
        "question":"which function is used to add one element in string",
        "option":["A. .extend()", "B. .insert()", "C. .append()", "D. .pop()"],
        "answer":"C"
        }
    ]
Score = 0
total_questions = len(questions)

print("WELCOME TO EXAMINATION\n" "Please select one option for each question\n")
for x, q in enumerate(questions):
    print(f"questions {x + 1}: {q['question']}")
    for option in q["option"]:
        print(option)
    user_answer = input("Answer:-")

    if user_answer == q["answer"]:
        print("Correct\n")
        Score += 25
    else:
        print(f"Wrong answer! The Correct Answer is {q['answer']}.\n")

print("Examination complete")
your_score = (Score)
print("YOUR SCORE = ", your_score)
percantage = (Score / 100)*100
print("PERCANTAGE = ", percantage)
if (percantage >= 50):
    print("Congraculation! you qualified this exam")
else:
    print("Better luck next time!")
