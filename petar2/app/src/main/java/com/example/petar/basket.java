package com.example.petar;

import androidx.appcompat.app.AppCompatActivity;

import android.content.Intent;
import android.os.Bundle;
import android.view.View;
import android.widget.Button;
import android.widget.ImageButton;
import android.widget.ImageView;

public class basket extends AppCompatActivity {

    private ImageView iv_back, iv_my, iv_search, iv_home, iv_order;

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_basket);




        iv_back = findViewById(R.id.iv_back);
        iv_back.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View view) {
                finish();
            }
        });














        iv_home = findViewById(R.id.iv_home);
        iv_home.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View view) {
                Intent intent = new Intent(basket.this , MainActivity.class);
                startActivity(intent); //액티비티 이동
            }
        });

        iv_search = findViewById(R.id.iv_search);
        iv_search.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View view) {
                Intent intent = new Intent(basket.this , Search.class);
                startActivity(intent); //액티비티 이동
            }
        });

        iv_order = findViewById(R.id.iv_order);
        iv_order.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View view) {
                Intent intent = new Intent(basket.this , sssss.class);
                startActivity(intent); //액티비티 이동
            }
        });

        iv_my = findViewById(R.id.iv_my);
        iv_my.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View view) {
                Intent intent = new Intent(basket.this , My.class);
                startActivity(intent); //액티비티 이동
            }
        });

    }
}