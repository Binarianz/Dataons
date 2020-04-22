
public class Todo {
	
	String todo;
	Boolean done;
	
	public Todo(String todo) {
		this.todo = todo;
		this.done = false;
	}
	
	public String getTodo() {
		return this.todo;
	}
	
	public Boolean getDone() {
		return this.done;
	}
	
	public void setDone(Boolean done) {
		this.done = done;
	}
	
	public void setTodo(String todo) {
		this.todo = todo;
	}

	@Override
	public String toString() {
	
		return this.todo;
	}
	
	
	
	
	

}
