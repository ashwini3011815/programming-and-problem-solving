n = int(input())

contacts = {}

for _ in range(n):
    parts = input().split()
    
    if parts[0] == "ADD":
        name = parts[1]
        phone = parts[2]
        contacts[name] = phone

    elif parts[0] == "REMOVE":
        name = parts[1]
        if name in contacts:
            del contacts[name]

    elif parts[0] == "DISPLAY":
        if not contacts:
            print("No contacts")
        else:
            for name in sorted(contacts):
                print(f"{name}: {contacts[name]}")