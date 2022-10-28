public String getDocumentType(String input) throws Exception {
		
		String formattedInput = input.toLowerCase();
		
		switch (formattedInput) {
		  case "uuid":
		    return "E";
		  default:
			throw new Exception("Invalid Document Type");
		}    
		    
	}
