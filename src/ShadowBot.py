import pyjokes
import random
import sys, time
from inspiring_quotes import get_random_quote
from colorama import Fore, Style, init
from datetime import datetime

init(autoreset=True, strip=False, convert=True)

def print_typing_effect(text, color=Fore.LIGHTBLUE_EX, delay=0.04):
    for char in text:
        sys.stdout.write(color + char + Style.RESET_ALL)
        sys.stdout.flush()
        time.sleep(delay)
    print()  

def thinking_dots_replace(prefix="🤖 ShadowBot: ", color=Fore.LIGHTBLUE_EX, count=3, total_time=1.0):
    interval = total_time / (count * 2)
    sys.stdout.write(prefix)
    sys.stdout.flush()
    for i in range(count):
        sys.stdout.write(color + "." + Style.RESET_ALL)
        sys.stdout.flush()
        time.sleep(interval)
    sys.stdout.write("\r" + prefix + " " * count + "\r" + prefix)
    sys.stdout.flush()

responses_unknown = [
    "Hmm, I don't quite understand that yet.",
    "Sorry, I’m not sure what you mean.",
    "I’m still learning that. Can you try saying it differently?",
    "Oops, I didn’t catch that. Can you rephrase?",
    "Hmm… that’s new to me. Teach me!",
    "I wish I knew how to respond to that.",
    "That’s beyond my code powers… for now.",
    "I’m scratching my virtual head on that one."
]

def ChatBot_responce(user_input):
    user_input = user_input.lower()

    

    if "bye" in user_input or "quit" in user_input:
        responses = [
            "Goodbye! Talk later. 👋",
            "See ya! Catch you soon. ✌️",
            "Bye-bye! Stay awesome. 😎",
            "Farewell, human friend. 🫡",
            "Later, alligator! 🐊",
            "Catch you on the flip side! 🚀",
            "Adios! Until next time. 🌟"
        ]
        return random.choice(responses)
    
    elif any(word in user_input for word in ["fine", "good", "ok", "great", "awesome", "well", "not bad"]):
        responses_feeling = [
        "Glad to hear that! 😄",
        "That’s awesome! Keep it up 🚀",
        "Great! Let’s keep the vibes high ✨",
        "Happy to know you’re doing well! 🌟",
        "Sweet! That makes me happy too 😎",
        "Cool, cool! So what’s next? 🤔",
        "Good vibes only! 🔥",
        "Perfect! Let’s roll 🤖"
    ]
        return random.choice(responses_feeling)

    elif "your name" in user_input or "who are you" in user_input:  
        responses = [
            "I'm ShadowBot, your terminal AI!",
            "They call me ShadowBot — your AI buddy in the terminal.",
            "ShadowBot at your service! Always ready to chat.",
            "I’m ShadowBot, built to make your terminal less boring.",
            "ShadowBot here! Always ready to chat.",
            "ShadowBot — basically your code’s roommate.",
            "I’m ShadowBot, a mix of caffeine and algorithms.",
            "ShadowBot… kinda like Jarvis, but cheaper.",
            "I am ShadowBot… born in the depths of your code.",
            "ShadowBot — the voice in your terminal shadows.",
            "Names don’t matter, but if you insist… call me ShadowBot."
        ]   
        return random.choice(responses)
    
    elif "how are you" in user_input or "how's it going" in user_input:
        responses = [
            "I'm just a bot, but I'm doing great! How about you?",
            "I’m doing good, just vibing. How about you?",
            "All systems running smooth. How’s your day?",
            "Chillin’ in the code. What about you?",
            "I’m fine-tuned and ready. How are you?",
            "Feelin’ digital but alive. How’s it going for you?",
            "Better now that you’re here. How are you doing?",
            "I’m all good! What’s up with you?"
        ]
        return random.choice(responses)
    
    elif "joke" in user_input or "jokes" in user_input:
        joke = pyjokes.get_joke()
        return f"🎲 {joke}"

    elif "time" in user_input:
        return f"⏰ The current time is {datetime.now().strftime('%H:%M:%S')}"

    elif "date" in user_input:
        return f"📅 Today's date is {datetime.now().strftime('%d-%m-%Y')}"

    elif "weather" in user_input:
        return "🌤️ I can't check live weather yet, but it's always sunny in code world!"

    thanks_keywords = ["thank you", "thanks", "thnx", "ty"]
    responses_thanks = [
        "You're welcome! 😊",
        "No problem! 👍",
        "Anytime! ⏰",
        "Glad I could help! 😄",
        "My pleasure! 🙏",
        "No worries! 😎",
        "Happy to help! 🤗",
        "Always here for you! 💖"
    ]
    if any(word in user_input for word in thanks_keywords):
        return random.choice(responses_thanks)

    elif "motivation" in user_input or "quote" in user_input or "motivate" in user_input:
        quote = get_random_quote()
        return f"{quote['quote']} - {quote['author']}"
    
    greetings_keywords = [
        "hello", "hlo", "hii", "hi", "hlw", "hey", "yo", "hiya", "sup", 
        "good morning", "good afternoon", "good evening"
    ]
    responses_greetings = [
        "Hello! How can I help you today? 👋",
        "Hey there! What’s up? 😄",
        "Hi! How’s it going? 🌟",
        "Yo! Ready to chat? 🤖",
        "Hello! What can I do for you? 🫡",
        "Hiya! Need any help? ✨",
        "Hey! How’s your day going? ☀️",
        "Sup! What’s new with you? 🔥"
    ]
    if any(word in user_input for word in greetings_keywords):
        return random.choice(responses_greetings)

    elif "tired" in user_input or "sleepy" in user_input:
        return "You should rest… I’ll keep the code running. 😏"
    
    else:
        return Fore.RED + random.choice(responses_unknown)

def main():
    print(Fore.LIGHTGREEN_EX + "\nWelcome to ShadowBot! Type 'bye' or 'quit' to exit." + Style.RESET_ALL)
    while True:
        user_input = input("💬 You: ")
        response = ChatBot_responce(user_input)
        if "bye" in user_input.lower() or "quit" in user_input.lower():
            thinking_dots_replace(prefix="🤖 ShadowBot: ", color=Fore.LIGHTBLUE_EX, count=3, total_time=0.6)
            print_typing_effect(response, color=Fore.LIGHTYELLOW_EX)
            break
        else:
            thinking_dots_replace(prefix="🤖 ShadowBot: ", color=Fore.LIGHTBLUE_EX, count=3, total_time=1.0)
            print_typing_effect(response, color=Fore.LIGHTBLUE_EX)

if __name__ == "__main__":
    main()

