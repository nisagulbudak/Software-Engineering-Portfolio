import os

def analyze_logs(log_file):
    if not os.path.exists(log_file):
        print(f"Error: {log_file} not found.")
        return

    print(f"--- Analyzing: {log_file} ---")
    with open(log_file, 'r') as file:
        lines = file.readlines()
        
    errors = [line for line in lines if "ERROR" in line.upper()]
    
    print(f"Total Lines: {len(lines)}")
    print(f"Errors Found: {len(errors)}")
    
    for err in errors:
        print(f"LOG ALERT: {err.strip()}")

if __name__ == "__main__":
    
    analyze_logs("system.log")
