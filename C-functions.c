//
// To view/edit the script, click the Develop Script button
//
// This file defines the data and functions that will be used by EvalC
// steps in the script
//
// Note: this file is mandatory, do not delete it.
void main()
{
	
}
void UserName()
{
	lr_output_message("UserName is");
	lr_output_message(lr_eval_string("{UserName}"));
}
	
void QuoteNumber()
{
	lr_output_message("QuoteNumber is");
	lr_output_message(lr_eval_string("{QuoteNumber}"));
}
